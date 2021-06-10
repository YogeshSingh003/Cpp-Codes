#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n] ;

    cout << "Enter input of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    bool run = true;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                run = false;
            }
        }
        if (run)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}