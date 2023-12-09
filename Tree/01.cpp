#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *create()
{
    int x;
    Node *new_node;
    new_node = new Node;
    cout << "Enter data (-1 for no node): ";
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    new_node->data = x;
    cout << "Enter left child of " << x << ":\n";
    new_node->left = create();
    cout << "Enter right child of " << x << ":\n";
    new_node->right = create();
    return new_node;
}

void pre_order(Node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        pre_order(root->left);
        pre_order(root->right);
    }
}

void in_order(Node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        in_order(root->left);
        cout << root->data << " ";
        in_order(root->right);
    }
}

void post_order(Node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        post_order(root->left);
        post_order(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = NULL; // root is a pointer to the root node
    int choice;
again:
    cout << "1. Create a tree\n2. Pre-order traversal\n3. In-order traversal\n4. Post-order traversal\n5. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        root = create();
        break;
    case 2:
        pre_order(root);
        break;
    case 3:
        in_order(root);
        break;
    case 4:
        post_order(root);
        break;
    case 5:
        exit(0);
    default:
        cout << "Invalid choice\n";
    }
    goto again;
    return 0;
}