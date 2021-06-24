#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

// int getMinDiff(int arr[], int n, int k) {
//     int mn = INT_MAX;
//     int mx = INT_MIN;

//     for (int  i = 0; i < n; i++)
//     {
//         mn = min(mn, arr[i]);
//         mx = max(mx, arr[i]);
//     }

//     for (int  i = 0; i < n; i++)
//     {
//         if(arr[i] == mn){
//             arr[i] = arr[i] + k;
//             mn = i;
//         }

//         if(arr[i] == mx){
//             arr[i] = arr[i] - k;
//             mx = i;
//         }
//     }

//     // for (int  i = 0; i < n; i++)
//     // {
//     //     if(i != mn){
//     //         if(i != mx){
//     //             if((arr[i] - k) < arr[mn])
//     //                 arr[i] = arr[i] + k;
//     //             else
//     //                 arr[i] = arr[i] - k;
//     //         }
//     //     }
//     // }

//     return arr[mx] - arr[mn];
//     }

int getMinDiff(int arr[], int n, int k)
{
    // int a[n];
    // int mn = INT_MAX;
    // int mx = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if((arr[i] - k) <= 0)
    //         a[i] = arr[i] + k;
    //     else
    //         a[i] = arr[i] - k;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     mn = min(mn, a[i]);
    //     mx = max(mx, a[i]);
    // }

    // return mx - mn;

    sort(arr, arr + n);
    int minEle, maxEle;
    int result = arr[n - 1] - arr[0];

    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] >= k)
        {
            maxEle = max(arr[i - 1] + k, arr[n - 1] - k);
            minEle = min(arr[0] + k, arr[i] - k);

            result = min(result, maxEle - minEle);
        }
        else
            continue;
    }
    return result;
}

int main()
{
    int k = 5;
    // cin >> k;
    int n = 10;
    // cout << "Enter the length of array"<<endl;
    // cin >> n;

    int arr[n] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};

    // cout << "Enter input of array"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    cout << getMinDiff(arr, n, k);
    // int a[n];
    // // int mn = INT_MAX;
    // // int mx = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if((arr[i] - k) <= 0)
    //         a[i] = arr[i] + k;
    //     else
    //         a[i] = arr[i] - k;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    return 0;
}