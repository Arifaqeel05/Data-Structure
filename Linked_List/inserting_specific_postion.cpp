#include <iostream>
using namespace std;

struct specific_pos
{
    int data;
    specific_pos *address;
};
specific_pos *head = NULL, *temp;

void display()
{
    specific_pos *ptr;
    ptr = head;
    // int count = 0;
    while (ptr != NULL)
    {
        // count++;
        cout << ptr->data << ",";
        ptr = ptr->address;
    }
    // cout << "\nNUMBER OF NODES: " << count;
}

int counting_Node()
{
    specific_pos *ptr;
    ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        // cout << ptr->data << ",";
        ptr = ptr->address;
    }
    return count;
}
int main()
{

    // let create a linked list
    head = new specific_pos();
    head->data = 10;
    head->address = NULL;

    specific_pos *node1 = new specific_pos();
    node1->data = 20;
    node1->address = NULL;

    head->address = node1;

    specific_pos *node2 = new specific_pos();
    node2->data = 30;
    node2->address = NULL;

    node1->address = node2;

    specific_pos *node3 = new specific_pos();
    node3->data = 40;
    node3->address = NULL;

    node2->address = node3;

    int count = counting_Node();

    display();

    char choice;
    cout << "\nDO YOU WANT TO INSERT A NODE AT SPECIFIC POSITION: ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        int position;
        cout << "After which Node you want to insert (starting from '0' ): ";
        cin >> position;

        if (position > count)
        {
            cout << "INVALID POSITION";
        }
        else
        {
            int value;
            cout << "ENTER VALUE YOU WNAT TO INSERT: ";
            cin >> value;
            int i = 1; // consider i=1 to reach specific position

            temp = new specific_pos();
            temp->data = value;
            temp->address = NULL;

            // link building

            specific_pos *ptr1;
            ptr1 = head;

            if (i > position)
            {
                cout << "\nThis Node will be inserted at start \n";
                temp->address = ptr1;
                head = temp;
            }
            else
            {
                while (i < position)
                {
                    ptr1 = ptr1->address;
                    i++;
                }

                temp->address = ptr1->address;
                ptr1->address = temp;
            }
        }
    }
    display();
    return 0;
}

// Limitation of this code:
/*
-->in this code, if you give "0 " then new node will be inserted at the start
*/