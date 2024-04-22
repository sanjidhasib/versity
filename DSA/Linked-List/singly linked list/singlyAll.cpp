#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insetAtTail(Node *&tail, int dt)
{
    Node *node = new Node(dt);
    tail->next = node;
    tail = node;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
{
    Node *temp = head;
    int cnt = 1;

    if (pos == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    if (temp->next == NULL)
    {
        insetAtTail(tail, data);
        return;
    }

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletion(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        head = head->next;
        temp->next = NULL;
        return;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;

        if (curr->next == NULL)
        {
            prev->next = NULL;
        }
        curr->next = NULL;
    }
}

int searchNode(Node *&head, int data)
{
    int pos = 1;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int data,first,last;

    cout << "Enter numbers to add to the list (-1 to stop):" << endl;
    cin >> data;

    while (data != -1)
    {
        if (head == nullptr)
        {
            head = new Node(data);
            tail = head;
        }
        else
        {
            insetAtTail(tail, data);
        }
        cin >> data;
    }

    cout << "Linked list after insertion:" << endl;
    print(head);

    // cout << " insertion at head:" << endl;
    // cin>>first;
    // InsertAtHead(head,first);
    // print(head);

    
    // cout << " insertion at tail:" << endl;
    // cin>>last;
    // insetAtTail(tail,last);
    // print(head);

    int node;
    cout<<"enter node to delete: "<<endl;
    cin>>node;

    int pos = searchNode(head, node);

    deletion(head,pos);
    cout<<"after deletion"<<endl;
    print(head);

  
//    cout<<pos;

   
    return 0;
}
