#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, armstrong = 0, rem = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        armstrong = armstrong + rem * rem * rem;
        n = n / 10;
    }
    if (armstrong == temp)
    {
        cout << temp << " is a armstrong No.";
    }
    else
    {
        cout << temp << " is not a armstrong No.";
    }

    return 0;
}