#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    string str;
    getline(cin, str);

    
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' || str[i]<='z'){
            str[i] -= 32;
        }
    }

    cout << str<<endl;

    string str2;
    getline(cin, str2);

    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    cout << str2;

    return 0;
}