#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *link;
};
// declare head pointer as global variable
Node *head;
Node *temp;

void create_list()
{
    int total_node;
    cout << "HOW MANY NODES YOU WANT TO CREATE: ";
    cin >> total_node;

    int num;

    head = NULL;
    temp = NULL;

    for (int i = 1; i <= total_node; ++i)
    {
        Node *new_node = new Node();
        cout << "Enter the data of node " << i << ": ";
        cin >> num;
        new_node->data = num;
        new_node->link = NULL;

        if (head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->link = new_node;
            temp = temp->link;
        }
    }
}

void insert_at_start()
{
    int value;
    cout << "ENTER THE VALUE YOU WANT TO INSERT AT START:";
    cin >> value;
    Node *new1 = new Node();
    new1->data = value;
    new1->link = NULL;

    if (head == NULL)
    {
        head = new1;
    }
    else
    {
        new1->link = head;
        head = new1;
    }
}

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}
int main()
{
    int choice1;
    char choice;

    do
    {
        cout << "------------------Linked List------------------\n";
        cout << "1.Create Linked List\n";
        cout << "2.Insertion in Linked List\n";
        cout << "3.Deletion in Linked List\n";
        cout << "4.Searching in Linked List\n";
        cout << "5.Sorting in Linked List\n";
        cout << "6.Reverse Linked List\n";
        cout << "7.Display Linked List\n";
        cout << "8.Exit\n";
        cout << "------------------------------------------------\n";

        cout << "ENTER YOUR CHOICE: ";
        cin >> choice1;

        switch (choice1)
        {
        case 1:
            create_list();
            break;
        case 2:
            insert_at_start();
            break;
        case 7:
            display();
            break;

        default:
            cout << "Invalid Choice\n";
            break;
        }

        cout << "\nDO YOU WANT TO CONTINUE(y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
