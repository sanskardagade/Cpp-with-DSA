#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next = NULL;
    Node* prev = NULL; //extra for dll
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; //extra for dll
    }
};
class DLL{//User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail= NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            temp->prev = tail; //extra 
            head = temp;
        }
        size++;
    } 

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; //extra
            head = temp;
        } 
        size++;
    }

    void insertAtIndex(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size)insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; //extra
            t->next->prev = t; //extra
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!";
            return; 
        }
        head = head->next;
        if(head) head->prev = NULL;//extra
        if(head==NULL) tail = NULL;//extra
        size--; 
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        if(size==1){//extra
        deleteAtHead();
        return;
        }
        Node* temp = tail->prev; 
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index!";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            } 
            temp->next = temp->next->next;
            temp->next->prev = temp;//extra
            size--;  
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val; 
        }
    }


    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl; 
    }
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display(); 
    list.insertAtTail(40);
    list.display(); 
    cout<<list.getAtIdx(1);
}