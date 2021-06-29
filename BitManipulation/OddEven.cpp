#include <iostream>
using namespace std;

bool oddeven(int n)
{
    if (n & 1)
        return false;
    else
        return true;
}

int main()
{

    int n;
    cin >> n;
    if (oddeven(n))
        cout << n << " is even";
    else
        cout << n << " is odd";

    return 0;
}