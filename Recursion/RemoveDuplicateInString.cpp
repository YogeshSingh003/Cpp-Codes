#include <iostream>
using namespace std;

string removeDuplicate(string s){
    if(s.length() == 0)
        return "";
    char c = s[0];
    string ans = removeDuplicate(s.substr(1));

    if (c == ans[0])
        return ans;
    return c + ans;
}

int main()
{
    cout << removeDuplicate("aaabbbcdddeef") << endl;

    return 0;
}