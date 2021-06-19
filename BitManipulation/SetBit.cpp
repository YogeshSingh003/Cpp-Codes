#include <iostream>
using namespace std;
 
int main()
{
    int n, pos;
    cin >> n >> pos;

    n = n | (1 << pos);

    cout << n;

    return 0;
}