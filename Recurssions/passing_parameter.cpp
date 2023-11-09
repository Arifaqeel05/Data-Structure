#include <iostream>
using namespace std;
// call by value

int addition(int a, int b)
{
    int c = a + b;
    return c;
}
// call by reference
void swap(int &y, int &z) // & is used to pass the address of the variable and body of the function is unchanged
{
    int temp = y;
    y = z;
    z = temp;
}

// call by address

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "Swaping by pass by address: " << *p << " " << *q << endl;
}
int main()
{
    int a = 10, b = 20;
    int c = addition(a, b);
    cout << c << endl;

    swap(a, b); // this is call by reference only defination of the function is changed
    cout << a << " " << b << endl;
    int k = 200, l = 300;
    swap(&k, &l); // passing address of the variable

    return 0;
}