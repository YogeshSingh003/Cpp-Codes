#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,rem,ReverseNo = 0;
    cin >> n;
    
    while (n>0)
    {
        rem = n % 10;
        ReverseNo = ReverseNo * 10 + rem;
        n = n / 10;
    }
    cout << ReverseNo << endl;
    return 0;
}