// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int n = 0;
//     int size;
//     cin >> size;
//     int k;
//     cin >> k;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < k)
//         {
//             n = k - arr[i];
//             sum = sum + n;
//         }
//         else
//         {
//             n = arr[i] - k;
//             sum = sum + n;
//         }
//     }
//     cout << sum;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int n;
    int k, b;
    cin >> n >> k >> b;

    int arr[n];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (k < b)
    {
        arr[k] = arr[k] ^ arr[b];
        arr[b] = arr[k] ^ arr[b];
        arr[k] = arr[k] ^ arr[b];

        k++;
        b--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}