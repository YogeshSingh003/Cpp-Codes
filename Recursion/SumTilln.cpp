#include <iostream>
using namespace std;

int sumTillN(int n){
    if(n == 0){
        return 0;
    }

    return n + sumTillN(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sumTillN(n);

    return 0;
}