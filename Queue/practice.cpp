#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void create_initial(Queue &q)
{

    cout << "ENTER SIZE OF QUEUE:\n";
    cin >> q.size;

    q.arr = new int[q.size];

    cout << "ENTER VALUES OF QUEUE:\n";
    for (int i = 0; i < q.size; i++)
    {
        q.rear++;
        cin >> q.arr[q.rear];
    }
}

void insert_value(Queue &q)
{
    int num;
    cout << "ENTER VALUE DO U WANT TO INSERT: ";
    cin >> num;

    if (q.rear == q.size - 1)
    {
        cout << "INSERTION NOT POSSIBLE, NO CAPACITY";
    }
    else
    {
        q.rear++;
        q.arr[q.rear] = num;
        cout << "SUCCESSFULLY INSERTION";
    }
}

void dele_value(Queue &q)
{
    if (q.front > q.rear)
    {
        cout << "EMPTY QUEU" << endl;
        return;
    }
    else
    {
        q.front++;
    }
}

void display(Queue &q)
{
    cout << "ELEMENTS OF THE QUEUE ARE: \n";
    for (int i = q.front; i <= q.rear; i++)
    {
        cout << q.arr[i];
    }
}
int main()
{
    Queue q;
    q.front = 0;
    q.rear = -1;

    int choice;
    do
    {
        cout << "-------QUEUE MENU-------" << endl;
        cout << "1.Create Initial Queue" << endl;
        cout << "2.Insert Element" << endl;
        cout << "3.Delete Element" << endl;
        cout << "4.Display Queue" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            create_initial(q);
            break;
        case 2:
            insert_value(q);
            break;
        case 3:
            dele_value(q);
            break;
        case 4:
            display(q);
            break;
        case 5:
            cout << "EXIT SUCCESSFULLY\n";
            break;
        default:
            cout << "INVALID CHOICE";
            break;
        }
    } while (choice != 5);

    delete[] q.arr;
    return 0;
}
