#include <bits/stdc++.h>
using namespace std;
 
int Max(int n1,int n2,int n3){
    if(n1>n2){
        if(n1>n3)
            return n1;
        else
            return n3;
    }
    else if (n2 > n3)
        return n2;
    else
        return n3;
}

int Min(int n1,int n2,int n3){
    if(n1<n2){
        if(n1<n3)
            return n1;
        else
            return n3;
    }
    else if (n2 < n3)
        return n2;
    else
        return n3;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << Max(a, b, c)<<endl;
    cout << Min(a, b, c);

    return 0;
}