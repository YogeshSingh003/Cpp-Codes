#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    int n;
    cin >> n;
    if (ispowerof2(n))
        cout << n;
    else
        cout << false;

    return 0;
}