#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int totalCount = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int j = i;
        while (j > 0)
        {
            j = j & (j - 1);
            count++;
        }
        totalCount = totalCount + count;
    }
    return totalCount;
}

int main()
{
    cout << countSetBits(4);

    return 0;
}