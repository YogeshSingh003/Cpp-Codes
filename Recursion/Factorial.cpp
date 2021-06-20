#include <iostream>
using namespace std;
 
int fact(int n){
    if (n == 0)
    {
        return 1;
    }
    
    
    int preFact = fact(n - 1);
    return n * preFact;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}