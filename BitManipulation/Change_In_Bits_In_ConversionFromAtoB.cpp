#include <iostream>
using namespace std;

int NoofOnes(int a, int b)
{
    int x = a ^ b;
    int count = 0;
    while (x > 0)
    {
        if (x & 1 != 0)
        {
            count++;
        }
        x = x >> 1;
    }
    return count;
}
int NoofOnes2(int a, int b)
{
    int x = a ^ b;
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

    cout << NoofOnes2(8, 7);
    return 0;
}