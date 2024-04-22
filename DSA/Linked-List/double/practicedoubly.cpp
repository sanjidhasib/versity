#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAthead(Node*&head,int data){
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else{
        newNode->next=head;
        newNode=head;
    }
}

int main(){

    Node*head=NULL;
    Node*tail=NULL;
}