#include <iostream>
#include <string>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
        return;

    string rev = s.substr(1);
    reverse(rev);
    cout << s[0];
}

void reverse2(string s, int n, int i)
{
    if (n == i)
        return;
    reverse2(s, n, i + 1);
    cout << s[i];
}

int main()
{

    reverse("ram");

    return 0;
}