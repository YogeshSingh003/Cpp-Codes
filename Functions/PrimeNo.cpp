#include<bits/stdc++.h>
using namespace std;

bool PrimeCheck(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

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

    // PrimeNo(n);

    for (int i = 2; i < n; i++)
    {
        if(PrimeCheck(i)){
            cout << i << endl;
        }
    }
    
    return 0;
}