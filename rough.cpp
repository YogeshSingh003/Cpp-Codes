#include <iostream>
using namespace std;

int power(int n, int pow)
{
    if (pow == 0)
        return 1;
    return n * power(n, pow - 1);
}

int main()
{

    cout << power(5, 5);
    return 0;
}