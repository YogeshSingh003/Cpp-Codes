#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int arr[n] = {5, 4, 4, 3, 3};

    int a = 0;
    int b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
            a++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
            b++;
    }

    if (a == n - 1 || b == n - 1)
        cout << 1;
    else
        cout << 0;

    return 0;
}