#include <iostream>
using namespace std;

void reverse2(string s, int n, int i)
{
    if (n == i)
        return;
    reverse2(s, n, i + 1);
    cout << s[i];
}

int main()
{
    string s = "RamKiJai haha";
    int n = s.size();
    reverse2(s, n, 0);
    return 0;
}