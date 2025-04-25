#include <iostream>
#include <string>
using namespace std;

struct StockNode {
    string symbol;
    double price;
    StockNode* left;
    StockNode* right;

    StockNode(string symbol, double price) {
        this->symbol = symbol;
        this->price = price;
        left = nullptr;
        right = nullptr;
    }
};

class StockBST {
private:
    StockNode* root;

    StockNode* insertHelper(StockNode* node, string symbol, double price) {
        if (node == nullptr) {
            return new StockNode(symbol, price);
        }

        if (symbol < node->symbol) {
            node->left = insertHelper(node->left, symbol, price);
        } else if (symbol > node->symbol) {
            node->right = insertHelper(node->right, symbol, price);
        }

        return node;
    }

    StockNode* searchHelper(StockNode* node, string symbol) {
        if (node == nullptr || node->symbol == symbol) {
            return node;
        }

        if (symbol < node->symbol) {
            return searchHelper(node->left, symbol);
        } else {
            return searchHelper(node->right, symbol);
        }
    }

public:
    StockBST() {
        root = nullptr;
    }

    void insert(string symbol, double price) {
        root = insertHelper(root, symbol, price);
    }

    StockNode* search(string symbol) {
        return searchHelper(root, symbol);
    }

    StockNode* findMaxHelper(StockNode* node) {
        if (node == nullptr) {
            return nullptr;
        }

        if (node->right == nullptr) {
            return node;
        }

        return findMaxHelper(node->right);
    }

    StockNode* findMinHelper(StockNode* node) {
        if (node == nullptr) {
            return nullptr;
        }

        if (node->left == nullptr) {
            return node;
        }

        return findMinHelper(node->left);
    }

    StockNode* findMax() {
        return findMaxHelper(root);
    }

    StockNode* findMin() {
        return findMinHelper(root);
    }
};

int main() {
    StockBST stockTree;

    // Take input from the user
    int numStocks;
    cout << "Enter the number of stocks: ";
    cin >> numStocks;

    for (int i = 0; i < numStocks; i++) {
        string symbol;
        double price;

        cout << "Enter the symbol and price of stock " << i+1 << ": ";
        cin >> symbol >> price;

        stockTree.insert(symbol, price);
    }

    // Find the maximum value
    StockNode* maxStock = stockTree.findMax();
    if (maxStock != nullptr) {
        cout << "Maximum stock: " << maxStock->symbol << ", Price: " << maxStock->price << endl;
    } else {
        cout << "No stocks found." << endl;
    }

    // Find the minimum value
    StockNode* minStock = stockTree.findMin();
    if (minStock != nullptr) {
        cout << "Minimum stock: " << minStock->symbol << ", Price: " << minStock->price << endl;
    } else {
        cout << "No stocks found." << endl;
    }

    return 0;
}