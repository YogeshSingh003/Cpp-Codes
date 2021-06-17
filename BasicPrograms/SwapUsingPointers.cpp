#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;

    int *aptr = &a;
    int *bptr = &b;
    swap(*aptr,*bptr);
    cout << a << " " << b<<endl;

    int **aaptr = &aptr;
    int **bbptr = &bptr;

    swap(*aaptr,*bbptr);
    cout << a << " " << b<<endl;
    return 0;
}