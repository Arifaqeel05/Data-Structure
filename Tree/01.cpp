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
    Node *temp;
    int x;
    int choice;
    cout << "ENTER 1 FOR CREATING NODE AND 0 FOR EXITING: ";
    cin >> choice;

    if (choice == 0)
    {
        return 0;
    }

    else
    {
        cout << "ENTER DATA: ";
        cin >> x;

        temp = new Node();

        temp->data = x;

        cout << "ENTER LEFT CHILD OF " << x << endl;
        temp->left = create();

        cout << "ENTER RIGHT CHILD OF " << x << endl;
        temp->right = create();

        return temp;
    }
}
int main()
{
    Node *root; // root is a pointer to the root node
    root = create();
    return 0;
}