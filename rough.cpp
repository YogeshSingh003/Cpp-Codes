#include <iostream>
using namespace std;

void rever(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    rever(arr, i + 1, n);
    swap(arr[i], arr[n - i - 1]);
}
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (auto e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    rever(arr, 0, n);
    for (auto e : arr)
    {
        cout << e << " ";
    }
    return 0;
}