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

void delete1()
{
    if (head == NULL)
    {
        cout << "EMPTY";
    }
    else
    {
        Node *ptr;
        ptr = head;
        head = head->address;
        delete (ptr);
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
    // delete 1st Node
    cout << "LINKED LIST AFTER DELETION OF FIRST NODE:\n";
    delete1();
    display();

    return 0;
}