#include <iostream>
using namespace std;
 
int main()
{
    int n, pos;
    cin >> n >> pos;

    cout << (n & (~(1 << pos)));

    return 0;
}