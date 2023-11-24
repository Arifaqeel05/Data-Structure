#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
// Declare head, temp pointer as global variables
Node *head = NULL, *temp;

void create_list()
{
    int num;
    char choice1;
    cout << "ENTER Value of 1st Node:";
    cin >> num;

    head = new Node();
    head->data = num;
    head->link = NULL;
    temp = head;

    cout << "DO YOU WANT TO INSERT ANOTHER NODE(y/N): ";
    cin >> choice1;

    while (choice1 == 'Y' || choice1 == 'y')
    {
        cout << "ENTER VALUE OF NEXT NODE: ";
        cin >> num;

        Node *second = new Node();
        second->data = num;
        second->link = NULL;

        temp->link = second;
        temp = temp->link;

        cout << "DO YOU WANT TO INSERT ANOTHER NODE(y/N): ";
        cin >> choice1;
    }
}

void display_list()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->link;
    }
    cout << endl;
}
int main()
{

    int choice;

    do
    {

        cout << "------------LINKED LIST--------------";
        cout << "\n1.Create Linked List";
        cout << "\n2.Display List";
        cout << "\n3.Exit";

        cout << "\n--------------------------------------\n";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            create_list();
            break;
        case 2:
            display_list();
            break;
        case 3:
            cout << "EXIT SUCCESSFULLY";
            break;
        default:
            cout << "INVALID CHOICE\n";
            break;
        }
    } while (choice != 3);

    return 0;
}
