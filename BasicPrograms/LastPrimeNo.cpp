#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    bool primeCheck = true;

    for (int j = 1; j <= n; j++)
    {
        primeCheck = true;

        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                primeCheck = false;
                break;
            }
        }
        if (primeCheck == true)
        {
            k = j;
        }
    }

    cout << k<<" is last prime No";
    return 0;
}

