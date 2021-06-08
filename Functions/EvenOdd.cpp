#include <bits/stdc++.h>
using namespace std;
 
bool EvenOrOdd(int n){
    if(n%2==0)
        return true;
    return false;
} 

int main()
{
    int n;
    cin >> n;

    if(EvenOrOdd(n))
        cout << n << " is even";
    else
        cout << n << " is odd";

    return 0;
}