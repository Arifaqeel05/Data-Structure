#include <iostream>
using namespace std;

struct React
{
    int length;
    int breadth;
}; // Don't forget to put semicolon at the end of structure

int main()
{
    React obj;  // Creating object of structure
    React *ptr; // creating pointer of structure
    ptr = &obj; // assigning address of object to pointer

    ptr->length = 20;
    ptr->breadth = 10;

    cout << "AREA OF REACTANGLE IS: "
         << ptr->length * ptr->breadth << endl;
    return 0;
}