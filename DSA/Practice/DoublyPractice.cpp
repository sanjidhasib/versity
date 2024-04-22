#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    
};

void insertAtHead(Node*&head,int data){
    Node*temp=new Node(data);
    if(head!=NULL){
        head->next=temp;
        temp->prev=head;
    }
    head=temp;
}

int getLength(Node*&head){
    Node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;

}

int searchNode(Node*&head,int data){
    Node* temp=head;
    int pos=1;
    while(temp!=NULL){
        if(data==temp->data)
        return pos;
        else{
            temp=temp->next;
            pos++;
        }
    }
    return -1;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (tail != NULL)
    {
        tail->next = temp;
        temp->prev = tail;
    }
    tail = temp;
}

void insertAtPosition(Node*&head,Node*&tail,int pos,int data){
    int cnt=1;
    Node*temp=head;
    while(cnt<pos-1){
        temp->prev = temp;
        temp = temp->next;
        cnt++;
    }
    Node*newNode= new Node(data);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}

void deleteAtPosition(Node*&head,Node*&tail,int pos){
    int cnt=1;
    Node*temp=head;
    while(cnt<pos-1){
        temp->prev=temp;
        temp=temp->next;
        cnt++;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
}


Node *CreateNode(Node*&head,Node*&tail){
    cout << "enter Nodes(-1 to stop)"<< endl;
     int node;

     while(true){

         cin >> node;

         if (node == -1)
         {
             break;
         }
         else
         {
             if (head == NULL)
             {
                 head = new Node(node);
                 tail = head;
             }
             else
             {
                 insertAtTail(tail, node);
             }
         }
     }

     return head;
}

     void printNode(Node * &head)
     {
         Node *temp1 = head;
         while (temp1 != NULL)
         {
             cout << temp1->data << " ";
             temp1 = temp1->next;
         }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    Node*List=CreateNode(head,tail);
    cout<< "Created linked list: ";
    printNode(head);


    int position=searchNode(head,7);
    cout<<"position";
    cout<<position<<endl;

    insertAtPosition(head, tail, 3, 99);
    cout<< "After insertion" <<endl;
    printNode(head);

    deleteAtPosition(head,tail,0);
    cout<<"after deletion:";
    printNode(head);
}