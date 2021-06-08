#include <bits/stdc++.h>
using namespace std;
 
void swaptwo(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << endl;
    cout << b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swaptwo(a, b);
    cout << a << b;

    return 0;
}