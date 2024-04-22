#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class queue
{
public:
    node *front;
    node *rear;

    queue(){
        this->front=NULL;
        this->rear=NULL;
    }

    void push(){
        int x;
        cout<<"enter a data ti push "<<endl;
        cin>>x;

        node* n= new node(x);

        if(front==NULL){
            front=front->next;
            return;
        }
        rear->next=n;
        rear=rear->next;

    }

    void pop(){
        if(front==NULL){
            cout<<"Underflow";
        }
        front=front->next;
        node*todelete=front;
        delete todelete;
    }

    int peak(){
        if (front == NULL)
        {
            cout << "Underflow";
        }

        return front->data;

    }
    void empty(){
        if(front==NULL || front->next==NULL){
            cout<<"Empty";
        }
    }
};

int main(){
    queue q;
    q.push();
    q.push();
    int a=q.peak();
    cout<<a<<endl;
}