#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,power;
    cin >> n>> power;

    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans = ans * n;
    }

    cout << ans;
    return 0;
}