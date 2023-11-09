#include <iostream>
using namespace std;

int add(int a, int b) // FUNCTION DEFINITION
{
    int c = a + b; // FUNCTION BODY
    return c;
}
int main()
{
    cout << "THIS IS ALL ABOUT REVISION OF FUNCTIONS IN C++\n";

    int num1, num2;
    cout << "ENTER TWO NUMBERS: ";
    cin >> num1 >> num2;

    int y = add(num1, num2); // CALLING THE FUNCTION

    cout << "THE SUM OF TWO NUMBERS IS: " << y << endl;
    return 0;
}