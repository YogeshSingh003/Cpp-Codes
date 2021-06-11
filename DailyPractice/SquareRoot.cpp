#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n = 25;
    // cin>>n;

    int i;
    for ( i = 0; n >= 0; i++)
    {
        n -= 2 *i + 1;
    }

    cout << i - 1;
    return 0;
}