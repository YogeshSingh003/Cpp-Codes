#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s,s1 = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i+1]){
            s1 = s1 + s[i];
        }
    }

    cout << s1;

    return 0;
}