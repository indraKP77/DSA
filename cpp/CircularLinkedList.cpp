#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircList{
    Node* head;
    Node* tail;
    public:
    CircList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void printLL(){
        if(head == NULL){
            cout<<"Empty List"<<endl;
            return;
        }
        if(head == tail){
            cout<<head->data<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" "<<endl;
    }
    void insertAtTail(int val){
        if(tail == NULL){
            insertAtHead(val);
        }
        else{
            Node* newNode = new Node(val);
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    void deleteAtHead(){
        if(head == NULL){
            cout<<"Empty List, nothing to delete"<<endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        tail->next = head;
        delete temp;
    }
    void deleteAtTail(){
        if(tail == NULL){
            cout<<"Empty List"<<endl;
            return;
        }
        if(head == tail){
            delete tail;
            head = tail = NULL;
        }
        Node* temp = tail;
        Node* prev = head;
        while(prev->next!=tail){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }
};

int main(){
    CircList ll;
    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.insertAtTail(4);
    ll.deleteAtHead();
    ll.deleteAtTail();
    ll.printLL();
    return 0;
}