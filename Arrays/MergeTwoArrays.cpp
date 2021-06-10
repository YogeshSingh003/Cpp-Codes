#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[] = {2, 5, 8};
    int b[] = {4, 13, 19};
    

    int sizeOfa = sizeof(a) / sizeof(a[0]);
    int sizeOfb = sizeof(b) / sizeof(b[0]);
    int sizeOfc = sizeOfa + sizeOfb;

    int c[sizeOfc];

    for (int i = 0; i < sizeOfa; i++)
    {
        c[i] = a[i];
    }
    
    for (int i = 0; i < sizeOfb; i++)
    {
        c[i+sizeOfa] = b[i];
    }
    

    for (int i = 0; i < sizeOfc; i++)
    {
        cout << c[i]<<" ";
    }
    
    return 0;
}