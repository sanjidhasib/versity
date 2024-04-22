#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class mystack
{

    Node *head;
    int stacksize;

public:
    mystack()
    {
        head = NULL;
        stacksize = 0;
    }

    void push(int n)
    {
        Node *temp = new Node();
        temp->data = n;
        temp->next = head;
        head = temp;
        cout << "pushed to the stack" << endl;
        stacksize++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty"<<endl;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
            cout << "poped" << endl;
            stacksize--;
        }
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "No top element stack is empty" << endl;
            return -1;
        }
        else
        {
            cout << head->data << endl;
            return head->data;
        }
    }

    int size()
    {
        cout << "size of stack is" << stacksize<<endl;
        return stacksize;
    }
    int empty()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "stack is not empty" << endl;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    mystack s1;
    s1.push(3);
    s1.empty();
    s1.push(10);
    s1.push(10);
    s1.push(10);
    s1.push(10);
    cout<<s1.size();
    s1.top();
    s1.pop(); 
    s1.pop();
    s1.print();
    
}