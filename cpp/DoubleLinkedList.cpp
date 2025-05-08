#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DList{
    Node* head;
    Node* tail;
    public:
    DList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void printDLL(){
        if(head == NULL){
            cout<<"Double Linked List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"Double Linked List is empty, noting to delete"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(tail == NULL){
            cout<<"Empty linked list"<<endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL){
            temp->prev = NULL;
        }
        tail->next = NULL;
        delete temp;
    }
};

int main(){
    DList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_back();
    ll.printDLL();
    return 0;
}