#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node *temp = new Node(data);
    
    temp->next = head;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    Node*node=new Node(data);
    tail->next=node;
    tail=node;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"Null";
}


int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;

    insertAtHead(head,6);
    insertAtTail(tail,5);
    print(head);
}