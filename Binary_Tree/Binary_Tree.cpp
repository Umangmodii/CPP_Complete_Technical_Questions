#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct  Node *right;    
};

// New node creation
struct Node *newNode(int data)
{
    struct Node *Node = (struct Node *)malloc(sizeof(struct Node));

    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
};

// Traverse Preorder
void preorder(struct Node *temp)
{
    if(temp != NULL)
    {
        cout << " " << temp->data;
        preorder(temp->left);
        preorder(temp->right);
    }
}

// Traverse Preorder
void inorder(struct Node *temp)
{
    if(temp != NULL)
    {
        inorder(temp->left);
        cout << " " << temp->data;
        inorder(temp->right);
    }
}

// Traverse Preorder
void postorder(struct Node *temp)
{
    if(temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout << " " << temp->data;
    }
}

int main()
{
    struct Node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);

    cout << "Preorder Traversal ";
    preorder(root);

    cout << endl;

    cout << "Inorder Traversal ";
    inorder(root);

    cout << endl;

    cout << "Postorder Traversal ";
    postorder(root);

    return 0;
}

// Preorder Traversal  1 2 4 3
// Inorder Traversal  2 4 1 3
// Postorder Traversal  4 2 3 1