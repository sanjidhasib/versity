#include <iostream>
#include <queue> 
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

node *createBst(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    else
    {
        if (data > root->data)
        {
            root->right = createBst(root->right, data);
        }
        else
        {
            root->left = createBst(root->left, data);
        }
    }
    return root;
}

void takeInput(node *&root)
{
    int data;
    cout << "give input:";
    cin >> data;

    while (data != -1)
    {
        root = createBst(root, data);
        cin >> data;
    }
}
node *search(node* &root,int key){
    if(root==NULL){
        return;
    }
    else{
        if(key<root->data){
            return search(root->left,key);
        }
        else{
            return search(root->right,key);
        }
    }

}

void InorderTraversel(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        InorderTraversel(root->left);
        cout << root->data << " ";
        InorderTraversel(root->right);
    }
}

void insertNode(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
    }
    else
    {
        if (data > root->data)
        {
            insertNode(root->right, data);
        }
        else
        {
            insertNode(root->left, data);
        }
    }
}


void levelOrderTraversal(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *current = q.front();
        cout << current->data << " ";
        if (current->left != NULL)
            q.push(current->left);
        if (current->right != NULL)
            q.push(current->right);
        q.pop();
    }
}

int main()
{
    node *root = NULL;

    takeInput(root);
    InorderTraversel(root);

    int key;
    cout << "\nEnter the element to search: ";
    cin >> key;

    if (search(root, key))
    {
        cout << "Element found in the tree." << endl;
    }
    else
    {
        cout << "Element not found in the tree." << endl;
    }

    int newValue;
    cout << "Enter a new value to insert: ";
    cin >> newValue;
    insertNode(root, newValue);

    cout << "After insertion, the tree contains: ";

    // Perform level order traversal
    cout << "\nLevel Order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}
