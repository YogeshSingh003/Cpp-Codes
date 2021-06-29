#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 1, 5, 1, 6, 5, 6, 4, 8};
    int res = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        res = res ^ arr[i];
    }
    cout << res;

    return 0;
}