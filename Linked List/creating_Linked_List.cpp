#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

Node *head = NULL;
int main()
{
    int choice;
    cout << "1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete at beginning\n5. Delete at end\n6. Delete at position\n7. Display\n8. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "You have entered: " << choice << endl;
}