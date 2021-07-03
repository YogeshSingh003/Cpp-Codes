#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}

bool isPowerofTwo(int n)
{

    if (n == 0)
        return false;
    if ((n & (n - 1)) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPowerofTwo(n))
        cout << "yes";
    else
        cout << "no";
    // if (ispowerof2(n))
    //     cout << "yes";
    // else
    //     cout << "no";

    return 0;
}