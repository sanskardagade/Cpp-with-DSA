class LRUCache {
    constructor(capacity) {
        this.capacity = capacity;
        this.map = new Map();
        this.head = null;
        this.tail = null;
    }

    #removeNode(node) {
        if (node.prev) node.prev.next = node.next;
        if (node.next) node.next.prev = node.prev;

        if (node === this.head) this.head = node.next;
        if (node === this.tail) this.tail = node.prev;

        node.next = null;
        node.prev = null;
    }

    #addToHead(node) {
        node.next = this.head;
        node.prev = null;

        if (this.head) {
            this.head.prev = node;
        }

        this.head = node;

        if (!this.tail) {
            this.tail = node;
        }
    }

    get(key) {
        if (!this.map.has(key)) return -1;

        const node = this.map.get(key);

        // Move to head (most recently used)
        this.#removeNode(node);
        this.#addToHead(node);

        return node.value;
    }

    put(key, value) {
        if (this.map.has(key)) {
            const oldNode = this.map.get(key);
            this.#removeNode(oldNode);
            this.map.delete(key);
        }

        const newNode = {
            key,
            value,
            prev: null,
            next: null
        };

        this.#addToHead(newNode);
        this.map.set(key, newNode);

        // Remove least recently used
        if (this.map.size > this.capacity) {
            const lru = this.tail;
            this.#removeNode(lru);
            this.map.delete(lru.key);
        }
    }

    debug() {
        let current = this.head;
        let result = "";

        while (current) {
            result += `-->[[${current.key}:${current.value}]]-->`;
            current = current.next;
        }

        return result + "NULL";
    }
}

// ================= TESTING =================

const cache = new LRUCache(2);

console.log("Put(1,10)");
cache.put(1, 10);
console.log(cache.debug());

console.log("Put(2,20)");
cache.put(2, 20);
console.log(cache.debug());

console.log("Get(1):", cache.get(1)); // should be 10
console.log(cache.debug());

console.log("Put(3,30) -> evicts 2");
cache.put(3, 30);
console.log(cache.debug());

console.log("Get(2):", cache.get(2)); // should be -1
console.log("Get(3):", cache.get(3)); // should be 30
console.log(cache.debug()); 