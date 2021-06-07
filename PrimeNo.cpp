#include<bits/stdc++.h>
using namespace std;



void PrimeNo(int n){
    int count = 1;

    for (int j = 1; j <= n; j++)
    {
    
    bool primeCheck = true;

    for (int i = 2; i <= sqrt(j); i++)
    {
        if (j%i==0)
        {
            primeCheck = false;
            break;
        }
        
    }
    if (primeCheck == true)
    {
        cout<<count++<<". "<<j<<" is a prime No"<<endl;
    }
    // else
    // {
    //     cout<<j<<" is not a prime No"<<endl;
    // }
    }
}
int main(){
    int n;
    cin>>n;

    PrimeNo(n);
    return 0;
}