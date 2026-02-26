#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

struct Node {
    int data;
    Node *next, *prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(3);

    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    Node* head = a;

    cout<<head->data<<"\n"; // 1
    cout<<head->next->data<<"\n"; // 7

    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";

    return 0;
}