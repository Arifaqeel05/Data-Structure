#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *array;
};

int main()
{
    int chr;
    Queue q;
    cout << "ENTER SIZE: ";
    cin >> q.size;

    q.front = 0;
    q.rear = -1; // Initially, the rear pointer is set to -1 for an empty queue

    q.array = new int[q.size];
    cout << "ENTER VALUES: \n";

    for (int i = 0; i < q.size; i++)
    {
        q.rear++;
        cin >> q.array[q.rear];
    }

    cout << "\nDisplaying queue: \n";
    for (int j = q.front; j <= q.rear; j++)
    {
        cout << q.array[j] << " ";
    }
    cout << endl;
again:
    int choice;
    cout << "\n1. Enquqe\n2. Dequeue\n3. Display\n4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int value;
        cout << "Enter Value to Enqueue: ";
        cin >> value;
        q.rear++;
        q.array[q.rear] = value;
        cout<<"Value has been enqueued";
        break;
    case 2:
        q.front++;
        cout<<"Value has been dequeued";
        break;
    case 3:
        cout << "\nDisplaying queue: \n";
        for (int j = q.front; j <= q.rear; j++)
        {
            cout << q.array[j] << " ";
        }
        cout << endl;
        break;
    case 4:
        exit(0);
        break;

    default:
        cout << "Invalid choice!";
        break;
    }

    goto again;

    delete[] q.array;
    return 0;
}
