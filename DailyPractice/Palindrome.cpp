#include <bits/stdc++.h>
using namespace std;
 
int main()
{

    int n;
    cin >> n;

    int temp = n;
    int palin = 0;

    while(n>0){
        int rem = n % 10;
        palin = palin * 10 + rem;
        n = n / 10;
    }

    if(palin == temp)
        cout << temp << " is a palindrome no.";
    else
        cout << temp << " is not a palindrome no.";
    return 0;
}