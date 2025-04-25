#include <iostream>
using namespace std;

struct StockNode {
    string symbol;
    double price;
    StockNode* left;
    StockNode* right;
    
    StockNode(string sym, double p) : symbol(sym), price(p), left(nullptr), right(nullptr) {}
};

class StockBST {
private:
    StockNode* root;
    
    StockNode* insertHelper(StockNode* node, string symbol, double price) {
        if (node == nullptr) {
            return new StockNode(symbol, price);
        }
        
        if (price < node->price) {
            node->left = insertHelper(node->left, symbol, price);
        } else {
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
    StockBST() : root(nullptr) {}

    void insert(string symbol, double price) {
        root = insertHelper(root, symbol, price);
    }

    StockNode* search(string symbol) {
        return searchHelper(root, symbol);
    }
};

int main() {
    StockBST stockTree;
    stockTree.insert("AAPL", 150.25);
    stockTree.insert("GOOG", 2700.50);
    stockTree.insert("MSFT", 330.75);
    stockTree.insert("AMZN", 3400.20);

    string symbolToSearch = "GOOG";
    StockNode* foundStock = stockTree.search(symbolToSearch);

    if (foundStock != nullptr) {
        cout << "Stock found: " << foundStock->symbol << ", Price: " << foundStock->price << endl;
    } else {
        cout << "Stock with symbol " << symbolToSearch << " not found." << endl;
    }

    return 0;
}
