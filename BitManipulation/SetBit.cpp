#include <iostream>
using namespace std;
 
int main()
{
    int n, pos;
    cin >> n >> pos;

    n = n | (1 << pos);

    cout << n;   // 1101        -->     1101

    return 0;
}