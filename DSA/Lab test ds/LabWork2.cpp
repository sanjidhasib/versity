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





int searchNode(Node *&head, int data)
{
    int pos = 1;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == data)
        {
           pos++;
        }
        temp = temp->next;
    }
    if(pos==1){
        return -1;
    }
    else {
        return pos;
    }
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int data, first, last;

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

  

    int node;
    cout << "enter node to see occurences: " << endl;
    cin >> node;

    int occurences = searchNode(head, node);


   cout<<occurences<<endl;
   

    return 0;
}
