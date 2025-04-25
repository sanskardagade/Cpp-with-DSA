#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void display2(Node* head){//pehele kam ho raha hain phir call lag rahi he 
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void recdisplay(Node* head){//pehele call lag rahi hain phir kaam ho raha hain 
    if(head==NULL) return;
    recdisplay(head->next);
    cout<<head->val<<" ";
}
void insertAtEnd(Node* head,int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    //cout<<a->next->next->next->val<<endl; //a se d ki direct value nikalne ke liye...
    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // } 
    // display(a);
    // display2(a);
    // cout<<size(a)<<endl;
    // displayrec(a);
    // cout<<endl;
    // recdisplay(a);
    // cout<<endl;
    display(a);
    insertAtEnd(a,80);
    display(a);

}