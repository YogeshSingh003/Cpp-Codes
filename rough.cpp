#include <bits/stdc++.h>
using namespace std;
 
int main()
{

    int n = 5;
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            // cout << char(c+i)<<" ";
            cout << j;
        }
        // c++;
        cout<<endl;
    }
    
    return 0;
}