#include <iostream>
using namespace std;

 int minJumps(int arr[], int n)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
            len++;
    }
    // cout << len << endl;
    int a[len];

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            a[k] = arr[i];
            k++;
        }
    }
    
    // for (int i = 0; i < len; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout <<  endl;

    int step = 0;
    int x = 0;
    while (x < len)
    {

        x = x + a[x];
        step++;
        if (x >= len - 1)
            break;
    }
    return step;
}

int main()
{
    int n = 10;
    // cout << "Enter the length of array" << endl;
    // cin >> n;

    int arr[n] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};

    // cout << "Enter input of array" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    cout << minJumps(arr, n);

    return 0;
}