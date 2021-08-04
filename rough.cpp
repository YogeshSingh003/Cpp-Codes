#include <iostream>
using namespace std;

void per(string s, int idx)
{
    if (s.size() <= idx)
    {
        cout << s << endl;
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        per(s, idx + 1);
        swap(s[idx], s[i]);
    }
}

int main()
{
    per("ABC", 0);

    return 0;
}