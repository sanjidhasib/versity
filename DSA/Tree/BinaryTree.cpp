#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *&root)
{
    int data;
    cout << "Enter data for the root: ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left child of" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right child of" << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void InOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
void preOrder(node *&root)
{
    if (root == NULL)
    {
        return;
    }

    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
   
    postOrder(root->right);

    cout << root->data << " ";
}



int main()
{
    node *root = NULL;
    buildTree(root);
    cout << "inOrder Traversal is " << endl;
    InOrder(root);
    preOrder(root);
    postOrder(root);
}
