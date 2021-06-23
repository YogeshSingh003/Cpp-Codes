#include <iostream>
using namespace std;

string moveX(string s){
    if(s.length() == 0)
        return "";

    char c = s[0];
    string ans = moveX(s.substr(1));

    if(c == 'x')
        return ans + c;
        
    return c + ans;
}

int main()
{
    cout << moveX("yoxgxxxesxxhxsixngh") << endl;
    return 0;
}