#include <iostream>
using namespace std;

int main()
{
    int n, pos,value;               
    cin >> n >> pos>>value;         

    int clearBit = n & (~(1 << pos));       
    int setBit = clearBit | (value << pos);

    cout << setBit;
    return 0;
}