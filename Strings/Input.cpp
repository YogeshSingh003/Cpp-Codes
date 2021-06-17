#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    string str1 = "Ram lakhan";
    cout << str1 << endl;

    string str2(5, 'y');
    cout << str2 << endl;

    return 0;
}