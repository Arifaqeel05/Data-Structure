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
    int choice = 1; // Changed to int and initialized to 1
    head = NULL;
    Node *temp, *newNode;
    while (choice != 0)
    {
        int number;
        cout << "\nENTER NUMBER YOU WANT TO INSERT IN LIST: ";
        cin >> number;
        temp = new Node();
        temp->data = number;
        temp->previous = NULL;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
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
