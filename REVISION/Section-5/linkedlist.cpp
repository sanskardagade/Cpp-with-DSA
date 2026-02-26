#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(5);

    a->next = b;
    b->next = c;

    Node* head = a;

    // cout<<head->data<<endl;


    // Insert a node 

    Node *temp = head->next;
    Node* newNode = new Node(4);
    newNode->next = temp->next;
    temp->next = newNode;

    //delete a node 

    temp = head;
    temp->next = temp->next->next;

    //print
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
    cout<<endl;
}