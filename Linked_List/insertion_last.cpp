#include <iostream>
using namespace std;

struct insert_last
{
    int info;
    insert_last *link;
};
insert_last *head = NULL, *temp;

void display()
{
    insert_last *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->info << " ,";
        ptr = ptr->link;
    }
}

int main()
{
    // create basic list
    head = new insert_last();
    head->info = 20;
    head->link = NULL;

    insert_last *head2 = new insert_last(); // 2nd Node
    head2->info = 100;
    head2->link = NULL;
    head->link = head2;

    // let we want to insert a value at the LAST

    int num;
    cout << "ENTER VALUE YOU WANT TO INSERT AT LAST: ";
    cin >> num;

    insert_last *newNode = new insert_last();
    newNode->info = num;
    newNode->link = NULL;
    // connection building
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newNode;

    display();

    return 0;
}
