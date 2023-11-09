#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

Node *head = NULL;

void insert_start()
{
    Node *ptr;
}
int main()
{
    int choice;
    cout << "1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete at beginning\n5. Delete at end\n6. Delete at position\n7. Display\n8. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        insert_start();
        break;

    default:
        break;
    }
}