#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree()
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout << "Enter the data for the left of " << data << endl;
    root->left = buildtree();

    cout << "Enter the data for the right of " << data << endl;
    root->right = buildtree();

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildtree();
    cout << "Preorder Traversal:" << endl;
    preorder(root);
    cout << endl;
    return 0;
}