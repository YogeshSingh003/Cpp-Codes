#include <iostream>
using namespace std;

void pi(string s){
    if(s.length() == 0)
        return;

    if(s[0] == 'p'  && s[1] == 'i'){
        cout << "3.14";
        pi(s.substr(2));
    }
    else
    {
        cout << s[0];
        pi(s.substr(1));
    }
    
    
}

int main()
{

    pi("pipipppiiiippppi");
    return 0;
}