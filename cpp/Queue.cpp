#include<iostream>
#include<vector>
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

class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head = tail = NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(empty()){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head=head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return head == NULL;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}