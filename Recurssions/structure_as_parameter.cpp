#include <iostream>
using namespace std;

struct React
{
    int length;
    int breadth;
};

// int area(React r1) //this is called pass by value
int area(React &r1) // this is called pass by reference. Both are correct
{
    int c = r1.length * r1.breadth;
    return c;
}

int main()
{
    React r; // object of structure

    r.length = 10;
    r.breadth = 5;

    int y = area(r); // structure as parameter

    cout << "Area is: " << y;

    return 0;
}