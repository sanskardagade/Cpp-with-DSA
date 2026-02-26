#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;
    c->next = a; // Making it circular

    Node* head = a;

    Node *temp = head;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while(temp != head);
    cout<<"\n";

    return 0;
}