#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    string s = "lala";
    string a = s;

    for (int i = 0; i < a.length()/2; i++)
    {
        char temp = a[i];
        a[i] = a[a.length() - i - 1];
        a[a.length() - i - 1] = temp;
    }

    
    return 0;
}