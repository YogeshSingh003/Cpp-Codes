#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows ,colns;
    cin>>rows>>colns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colns; j++)
        {
            if(i == 0 || j == 0 || i == rows-1 || j == colns-1){
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<" "<<endl;
    }
}