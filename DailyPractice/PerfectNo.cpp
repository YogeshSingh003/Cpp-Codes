#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int perfect = 0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0)
            perfect = perfect + i;
    }

    if(perfect == n)
        cout << n << " is a perfect no";
    else
        cout << n << " is not a perfect no";
    return 0;
}
