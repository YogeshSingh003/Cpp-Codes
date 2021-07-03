#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int main()
{
    int n = 8;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n] = {2, 7, 3, 12, 2, 3, 4, 7};

    cout << "Enter input of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xr = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];
    }
    int ps = 0;
    while (getBit(xr, ps) != 1)
    {
        ps++;
    }

    int currXr = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], ps))
            currXr = currXr ^ arr[i];
    }

    cout << currXr << " " << (currXr ^ xr);

    return 0;
}