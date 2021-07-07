#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key)
{
    // i = n - 1;
    if (i == -1)
        return -1;
    if (arr[i] == key)
        return i;
    return lastOcc(arr, n, i - 1, key);
}
int main()
{
    int n;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter input of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << firstOcc(arr, n, 0, key);
    cout << lastOcc(arr, n, n, key);
    return 0;
}