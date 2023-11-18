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
    return 0;
}