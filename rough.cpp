#include <iostream>
using namespace std;

int pow(int n, int p)
{
    if (p == 0)
        return 1;

    return n * pow(n, p - 1);
}

int main()
{

    cout << pow(3, 4);
    return 0;
}