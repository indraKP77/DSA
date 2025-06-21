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

class List{
    Node* head;
    public:
    List(){
        head = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_back(){
        if(head == NULL){
            cout<<"Empty List"<<endl;
            return;
        }
        else{
            Node* temp = head;
            Node* prev = NULL;
            while(temp->next!=NULL){
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            delete temp;
            return;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"Empty List";
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return;
        }
    }
    void reverseLL(){
        if(head == NULL){
            cout<<"Empty List";
            return;
        }
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return;
    }
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        return;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(4);
    ll.pop_front();
    ll.reverseLL();
    ll.print();
    return 0;
}