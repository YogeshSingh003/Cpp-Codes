#include <bits/stdc++.h>

using namespace std;

int getBit(int n,int pos){
    return (n xor (1 << pos));
}
int main()
{
    cout << getBit(5,2);

    return 0;
}