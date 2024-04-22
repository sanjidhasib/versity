#include<iostream>
using namespace std;


class Node
{
public:
int data;
Node* next;

Node(int data){
    this->data=data;
    this->next=NULL;
    }
//Destractor
// ~Node(){
//     int value = this->data;
//     if(this->next!=NULL){
//         delete next;
//         this->next=NULL;
//     }
// }
};

void InsertAtHead(Node* &head,int d){
   //new node creation
    Node* temp=new Node(d);

    temp->next = head;
    head = temp;

}
void insetAtTail(Node* &tail,int dt){
    Node* node=new Node(dt);

    tail->next=node;
    tail=node;
}

void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* &tail ,Node* &head,int pos,int data){
    Node* temp=head;
    int cnt=1;

    if (pos == 1)
    {
        InsertAtHead(head, data);
    }
    if (temp->next == NULL)
    {
        insetAtTail(tail, data);
    }

    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    Node* newNode= new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;

}

void deletion(Node*&tail,Node* &head,int pos){
    Node*temp=head;
    if(pos==1){
        head=head->next;
    
    temp->next=NULL; 
    // delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt = 1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next= curr->next;

        if(curr->next==NULL){
            prev->next=NULL;
        }
        tail=prev;
        curr->next=NULL;
    }
}

int searchNode(Node* &head,int data){
    int pos=1;
    Node*temp=head;

    while(temp->next!=NULL){

        if(temp->data==data){
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail=node1;

    print(head);

    InsertAtHead(head,12);
    cout<<'after insertion at head'<<endl;
    print(head);

    InsertAtHead(head, 15);
    print(head);

    insetAtTail(tail, 50);
    print(head);

    int posi = searchNode(head, 12);
    
    insertAtPosition(tail, head, posi, 4);
    print(head);

    deletion(tail,head,5);
    print(head);

    cout<<tail->data;

    
}