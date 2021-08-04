#include <iostream>
using namespace std;

int stair(int n)
{
    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    return stair(n - 3) + stair(n - 2) + stair(n - 1);
}

int main()
{
    cout << stair(4);

    return 0;
}