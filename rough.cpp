#include <iostream>
using namespace std;

int check(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return;
    }

    return check(arr, n, i + 1, key);
    if (arr[i] == key)
    {
        return i;
    }
}

int main()
{
    int arr[5] = {2, 6, 3, 2, 7};
    cout << check(arr, 5, 0, 3);

    return 0;
}