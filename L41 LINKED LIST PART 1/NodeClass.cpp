#include<iostream>
using namespace std;
class Node{//Linked List Node 
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    //10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d; 
    // Node *ptr = &b;
    cout<<b.val<<endl;
    // cout<<(*ptr).val<<endl;
    // cout<<(a.next)->val<<endl;
    // cout<<b.next->val<<endl;
    // cout<<d.val<<endl;
    // //printing value of d using a 
    // cout<<&b<<endl;
    // cout<<a.next<<endl;
    // cout<<&c<<endl;
    // cout<<(a.next)->next<<endl;
    // cout<<&d<<endl;
    // cout<<((a.next)->next)->next<<endl;
    // cout<<(((a.next)->next)->next)->val<<endl;  
    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}