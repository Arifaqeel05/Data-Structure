#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *link;
};
Node *head = NULL;

void display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->info << "->";
        ptr = ptr->link;
    }
    cout << "NULL";
}
int count()
{
    int a = 0;
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        a++;
        ptr = ptr->link;
    }
    return a;
}

void delete1()
{
    int position;
    cout << "\nENTER POSITION OF NODE DO U WANT TO DELETE: ";
    cin >> position;

    if (position > count())
    {
        cout << "INVALID CHOICE";
    }

    else
    {
        Node *current = head;
        Node *previous = head;

        if (head == NULL)
        {
            cout << "LINKED LIST IS ALREADY EMPTY";
        }

        else if (position == 1)
        {
            head = current->link;
            delete (current);
            current = NULL;
        }

        else
        {
            while (position != 1)
            {
                previous = current;
                current = current->link;
                position--;
            }
            previous->link = current->link;
            delete (current);
            current = NULL;
        }
    }
}

int main()
{
    char choice1;
    cout << "THIS IS ALL ABOUT DELETING NODE AT CERTAIN POSITION\n";

    head = new Node();
    head->info = 1000;
    head->link = NULL;

    // 2nd Node

    Node *n1 = new Node();
    n1->info = 2000;
    n1->link = NULL;

    head->link = n1;

    // 3rd Node
    Node *n2 = new Node();
    n2->info = 3000;
    n2->link = NULL;
    n1->link = n2;

    // 4th Node

    Node *n3 = new Node();
    n3->info = 4000;
    n3->link = NULL;
    n2->link = n3;
    cout << "\nBEFORE DELETING ANY NODE:\n";
    display();

    // delete certain Nodeq
    do
    {
        char choice;
        cout << "\nDO YOU WANT TO DELETE NODE(y/n):";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
            delete1();

        else
        {
            cout << "\nTHANKS FOR USING IT";
        }

        cout << "\nAFTER DELETING CERTSIN NODE:\n";
        display();
        cout << "\nDo u want to continue(y/n):";
        cin >> choice1;
    } while (choice1 != 'n' || choice1 != 'N');
    return 0;
}