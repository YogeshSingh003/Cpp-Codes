#include <bits/stdc++.h>
using namespace std;
 
int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    

    return factorial;
}

int main()
{

    int n;
    cin >> n;
    int temp = n;
    int strongNo = 0;

    while (n>0)
    {
        int rem = n % 10;
        strongNo = strongNo + factorial(rem);
        n = n / 10;
    }
    
    if(strongNo == temp)
        cout << temp << " is a strong no";
    else
        cout << temp << " is not a strong no";

    return 0;
}