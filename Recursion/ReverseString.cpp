#include <iostream>
#include <string>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
        return;

    reverse(s.substr(1));
    cout << s[0];
}

void reverse2(string s, int i)
{
    if (s.length() == i)
        return;
    reverse2(s, i + 1);
    cout << s[i];
}

int main()
{

    reverse2("ram", 0);

    return 0;
}