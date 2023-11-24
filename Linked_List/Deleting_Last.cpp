#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *address;
};

Node *head = NULL;

void display()
{

    Node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->info << "->";
        ptr = ptr->address;
    }
    cout << "NULL" << endl;
}
void delete2()
{
    Node *temp, *temp1;
    temp = head;  // this will on one node front ,this will on second node
    temp1 = head; // this will on 1st node

    if (head == NULL)
    {
        cout << "EMPTY LIST";
    }
    else if (head->address == NULL)
    {
        cout << "THERE IS ONLY ONE NODE IN THE LSIT";
        delete (head); // this is going to be deleted
    }

    else
    {
        while (temp->address != NULL) // with the help of temp1, we will reach to last node
        {
            temp1 = temp;
            temp = temp->address;
        }
        temp1->address = NULL;
        delete (temp);
    }
}
int main()
{
    head = new Node();
    head->info = 100;
    head->address = NULL;

    Node *n1 = new Node();
    n1->info = 200;
    n1->address = NULL;

    head->address = n1;

    Node *n2 = new Node();
    n2->info = 3000;
    n2->address = NULL;

    n1->address = n2;
    cout << "LINKED LIST BEFORE DELETION OF FIRST NODE:\n";
    display();
    cout << "\nAFTER DELETING LAST NODE: \n";

    delete2();
    display();

    return 0;
}