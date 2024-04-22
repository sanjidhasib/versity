#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};



node* insertTobst(node*&root,int d){
    if(root == NULL){
        root= new node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertTobst(root->right, d);
    }
    else{
        root->left = insertTobst(root->left,d);
    }
    return root;
}

void takeInput(node *&root){
    int data;
    cout<<"Enter the Data: ";
    
    cin>>data;

    while(data!=-1){

     root =  insertTobst(root,data);
        cin>>data;
    }
    
}

void InorderOf(node*&root){
    if (root==NULL){
        return;
    }

    else{
        InorderOf(root->left);
        cout<< root->data <<endl;
        InorderOf(root->right);
    
    }
}


int main(){
    node* root=NULL;
    takeInput(root);

    InorderOf(root);
}