#include <iostream>
using namespace std;

int NoofSetBits(int x)
{
    int count = 0;
    while (x > 0)
    {
        x = x & (x - 1);
        count++;
    }
    return count;
}

int main()
{
    int x = 16;
    cout << NoofSetBits(x);

    return 0;
}