#include <iostream>
using namespace std;

// void change_value(int *arr, int num)
void change_value(int arr[], int num) // both are same

// we can pass array as parameter by using pointer
// we can also pass array as (name of array+[]+size of array)

{
    int index;
    cout << "ENTER INDEX OF ELEMENT TO BE MODIFIED: ";
    cin >> index;

    int new_value;
    cout << "ENTER NEW VALUE: ";
    cin >> new_value;

    arr[index] = new_value;

    cout << "NEW ARRAY IS: \n";
    int i = 0;
    for (; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int arr[size];

    cout << "enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "elements of array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int choice;
    cout << "DO YOU WNAT TO MODIFY ARRAY ELEMENTS: ";
    cin >> choice;

    if (choice == 1)
    {
        change_value(arr, size);
    }
    else
    {
        cout << "THANK YOU";
    }

    return 0;
}

// Array can not be passed by value. It can only pass by address as mentioned above
