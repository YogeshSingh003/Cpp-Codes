#include <iostream>
using namespace std;
 
int main()
{
    int arr[4] = {10, 20, 30, 40};

    cout << *(arr+1)<<endl;
    cout << *arr+1<<endl;
    cout << *arr<<endl;
    cout << arr<<endl;

    // int *ptr = arr;
    for (int i = 0; i <  4; i++)
    {
        cout << *(arr + i) << " ";
    }
    
    return 0;
}