#include <iostream>
using namespace std;

void per(string s, string ans = "")
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        per(ros, ans + ch);
    }
}

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

int main()
{

    per("ABC", "");
    return 0;
}