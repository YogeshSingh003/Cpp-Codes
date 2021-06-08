#include<iostream>
using namespace std;

int main(){
    int a = 0,b = 1,c = 3;
    if (a > b)
    {
        if(a > c){
            cout<<a<<" is greatest"<<endl;
        }
        else
        {
            cout<<c<<" is greatest"<<endl;
        }
        
    }
    else if (b > c)
    {
        cout<<b<<" is greatest"<<endl;
    }
    else
    {
        cout<<c<<" is greatest"<<endl;
    }
    
    
    return 0;
}