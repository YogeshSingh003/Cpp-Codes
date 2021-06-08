#include <bits/stdc++.h>
using namespace std;

bool alphabate(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}
int main()
{
    char c ;
    cin >> c;

    if(alphabate(c))
        cout << c << " is a alphabate";
    else
        cout << c << " is not a alphabate";
    return 0;
}