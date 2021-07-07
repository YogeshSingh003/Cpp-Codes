#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int i, int key)
{

    if (i == n)
        return -1;

    if (arr[i] == key)
        return i;
    return FirstOcc(arr, n, i + 1, key);
}

int LastOcc(int arr[], int n, int i, int key)
{

    // if(i == n)
    //     return -1;

    // int restArray = LastOcc(arr, n, i + 1, key);
    // if(restArray != -1)
    //     return restArray;

    // if(arr[i] == key)
    //     return i;

    // return -1;

    if (i == -1)
        return -1;
    if (arr[i] == key)
        return i;
    return LastOcc(arr, n, i - 1, key);
}
int main()
{
    int arr[] = {2};
    cout << FirstOcc(arr, 1, 0, 2) << endl;
    cout << LastOcc(arr, 1, 0, 2);

    return 0;
}