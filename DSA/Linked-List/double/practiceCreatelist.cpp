#include<iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
 void insertAtHead(Node* &head,int d){
    Node *temp=new Node(d);

    temp->next=head;
    head=temp;
}

void print( Node* &head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<< " "<< "->"<<" ";
        temp=temp->next;
    }
    cout<<"Null";
}
 void insertAtTail(Node* &tail,int dt){
    Node* node=new Node(dt);

    tail->next=node;
    tail=node;


}
int main(){
    Node *node1= new Node(20);
    Node*head=node1;
    Node*tail=node1;

    insertAtHead(head,12);

    print(head);

    insertAtTail(tail,5);
    print(head);

    insertAtHead(head,10);
    print(head);

}