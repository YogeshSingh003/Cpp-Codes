#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
        int temp ;
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        temp = a + b;
        a = b;
        b = temp;
    }
    
    return 0;
}