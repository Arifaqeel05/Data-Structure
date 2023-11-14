// Q2 print numbers from(N -1) using recursion
#include <iostream>
using namespace std;

void fun(int n, int i)
{
    if (n < i)
        return;
    cout << n << ",";
    fun(n - 1, i);
}

int main()
{
    int num;
    cout << "ENTER NUMBER FROM WHERE U WANT TO PRINT" << endl;
    cin >> num;

    fun(num, 1);
    return 0;
}