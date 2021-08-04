#include <iostream>
using namespace std;

void subseq(string s, string ans = "")
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);

    subseq(ros, ans + c);
    subseq(ros, ans);
}

void subseq2(string s, string ans, int index)
{
    if (s.size() <= index)
    {
        cout << ans << endl;
        return;
    }

    subseq2(s, ans, index + 1);
    ans.push_back(s[index]);
    subseq2(s, ans, index + 1);
}

int main()
{

    subseq2("ABC", "", 0);
    cout << endl;
    subseq("ABC", "");
    return 0;
}