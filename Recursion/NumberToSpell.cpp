#include <iostream>
using namespace std;

void prnt(int n)
{

    if (n <= 0)
        return;

    int k = n % 10;
    // cout << k << " ";
    string s[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    prnt(n / 10);
    cout << s[k] << " ";
}

int main()
{
    prnt(304020);

    return 0;
}