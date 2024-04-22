#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void PrintNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head != NULL)
    {
        temp->next = head;
        head->prev = temp;
       
    }
    head = temp;
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

void inserAtPosition(Node* &head,Node*&tail ,int pos,int data){
    Node*temp=head;
    if(pos==1){
        insertAtHead(head, data);
        return;
    }
    
    int cnt=1;

    while(cnt<pos-1){
        temp->prev=temp;
        temp=temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node* node1=new Node(data);
    node1->next=temp->next;
   temp->next->prev=node1;
   temp->next=node1;
   node1->prev=temp;
}

void DeleteNode(Node*&head,int pos){
    if(pos==1){
    Node *temp=head;
    temp->next->prev=NULL;
    
    head=temp->next;

    temp->next = NULL;}
    else{
        Node*cur=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<pos){
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        cur->prev=NULL;
        prev->next=cur->next;
        cur->next=NULL;
    }
}


int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int searchNode(Node*head,int data){
    Node*temp=head;
    int pos=1;
    while(temp != NULL){
        if(temp->data==data){
           return pos;
        }
        else{
            pos++;
            temp=temp->next;
        }
    }
}


Node* CreateNode(Node*&head,Node*&tail){
    int node, i = 0;
    cout << "Enter the value for the node (-1 to stop): ";

    while (true)
    {

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

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    Node *List=CreateNode(head,tail);


    cout << "Linked List: ";
    PrintNode(List);
    cout << endl;

    DeleteNode(head,3);

    cout << "Linked List After deletion: "<<"head"<<tail->data;
    PrintNode(head);

    // int length = getLength(head);
    // int position=searchNode(head,7);


    // cout << "Length of the linked list: " << length << endl;
    // cout << "position of the Node is: " << position << endl;
    // inserAtPosition(head,tail,position,99);
    // PrintNode(head);

    // cout<<head->data<< endl;
    

        return 0;
    }
