#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 8;
    cout << "Enter the length of array" << endl;
    // cin >> n;

    int arr[n] = {-1, -1, -3, 2, -7, -5, 11, 6};

    // cout << "Enter input of array"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            continue;
        for (int j = i; j < n; j++)
        {
            if (arr[i] < 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}