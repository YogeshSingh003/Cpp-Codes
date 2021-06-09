#include <bits/stdc++.h>
using namespace std;

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

    int ind;
    while (1)
    {
        cout << "enter the index"<<endl;
        cin >> ind;
        if (ind < n)
            break;
        cout << "Your index input should be less than n"<<endl;
    }
    int mx = INT_MIN;

    for (int i = 0; i <= ind; i++)
    {
        mx = max(mx, arr[i]);
    }

    cout <<"Max --> "<< mx<<endl;
    return 0;
}