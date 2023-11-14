// Q1 print linearaly from (1-N) using recursion
#include <iostream>
using namespace std;

void fun(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;

    fun(i + 1, n);
}

int main()
{
    int num;
    cout << "ENTER NUMBER TO WHICH YOU WANT TO PRINT" << endl;
    cin >> num;

    fun(1, num);
    return 0;
}