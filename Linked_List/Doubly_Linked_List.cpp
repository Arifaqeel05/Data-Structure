#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *previous;
    Node *next;
};
Node *head;

void creating_list()
{

    head = NULL;
    Node *temp, *newNode;
    int choice = 1; // Changed to int and initialized to 1
    while (choice != 0)
    {
        int number;
        cout << "\nENTER NUMBER YOU WANT TO INSERT IN LIST: ";
        cin >> number;
        temp = new Node(); // Memory Allocation

        temp->data = number;
        temp->previous = NULL;
        temp->next = NULL;

        // checking eaither it is 1st Node if yes then if-part will execute
        if (head == NULL)
        {
            head = temp;    // Initialize head when head is NULL
            newNode = temp; // Initialize newNode when head is NULL
        }
        else
        {
            temp->previous = newNode;
            newNode->next = temp;
            newNode = temp; // Update newNode to the latest node
        }

        cout << "\nDO YOU WANT TO INSERT ANOTHER NODE (0/1): ";
        cin >> choice;
    }
}
void display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}

int main()
{
    cout << "THIS IS ABOUT CREATING THE DOUBLY LINKED LIST\n";
    creating_list();
    display();
    return 0;
}
