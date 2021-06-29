#include <iostream>
using namespace std;

void swaap(int a, int b)
{
    cout << "Before swap --> " << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap --> " << a << " " << b;
}

int main()
{

    swaap(5, 7);
    return 0;
}