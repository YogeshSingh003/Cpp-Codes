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

int main()
{

    subseq("ABC", "");
    return 0;
}