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
    while (ReverseNo>0)
    {
        rem = ReverseNo % 10;
        cout << rem<<endl;
        ReverseNo = ReverseNo / 10;
    }
    
    return 0;
}