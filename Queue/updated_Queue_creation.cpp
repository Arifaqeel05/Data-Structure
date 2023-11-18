#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *array;
};

void displayQueue(const Queue &q)
{
    cout << "\nDisplaying queue: \n";
    for (int j = q.front; j <= q.rear; j++)
    {
        cout << q.array[j] << " ";
    }
    cout << endl;
}

void insertElement(Queue &q)
{
    if (q.rear == q.size - 1)
    {
        cout << "Queue is full. Cannot insert more elements." << endl;
        return;
    }
    int value;
    cout << "Enter value to insert: ";
    cin >> value;
    q.rear++;
    q.array[q.rear] = value;
}

void deleteElement(Queue &q)
{
    if (q.front > q.rear)
    {
        cout << "Queue is empty. No elements to delete." << endl;
        return;
    }
    q.front++;
}

int main()
{
    Queue q;
    cout << "ENTER SIZE: ";
    cin >> q.size;

    q.front = 0;
    q.rear = -1;

    q.array = new int[q.size];
    cout << "ENTER VALUES: \n";
    for (int i = 0; i < q.size; i++)
    {
        q.rear++;
        cin >> q.array[q.rear];
    }

    displayQueue(q);

    int choice;
    do
    {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertElement(q);
            break;
        case 2:
            deleteElement(q);
            break;
        case 3:
            displayQueue(q);
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
