#include <iostream>
using namespace std;

struct insert_start
{
    int info;
    insert_start *link;
};
insert_start *head = NULL, *temp;

void display()
{
    int count = 0;
    insert_start *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        cout << ptr->info << " ,";
        ptr = ptr->link;
    }
    cout << "\nNUMBER OF NODES IN LINKED LIST ARE: " << count << endl;
}

int main()
{
    head = new insert_start();
    head->info = 20;
    head->link = NULL;

    insert_start *head2 = new insert_start(); // 2nd Node
    head2->info = 100;
    head2->link = NULL;
    head->link = head2;

    // let we want to insert a value at the start

    int num;
    cout << "ENTER VALUE YOU WANT TO INSERT AT START: ";
    cin >> num;

    insert_start *newNode = new insert_start();
    newNode->info = num;
    newNode->link = NULL;

    temp = head;
    newNode->link = temp;
    head = newNode;

    display();

    return 0;
}
