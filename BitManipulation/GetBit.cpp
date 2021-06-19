#include <iostream>
using namespace std;
 
int main()
{

    int n, pos;
    cin >> n >> pos;

    int x = n & (1 << pos);       
    if(x == (1<<pos))
        cout << "1" << endl;
    else
        cout << "0";

    return 0;
}