#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    // cout << "Enter the length of array" << endl;
    // cin >> n;

    int arr[n] = {1, 50, 60, 4, 50, 5, 60};

    // cout << "Enter input of array" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    const int N = 100;
    int a[N];

    for (int i = 0; i < N; i++)
    {
        a[i] = -1;
    }

    int minIndex = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[arr[i]] != -1)
        {
            minIndex = min(minIndex, a[arr[i]]);
        }
        else
        {
            a[arr[i]] = i;
        }
    }

    if (minIndex == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << minIndex + 1;
    }
    return 0;
}