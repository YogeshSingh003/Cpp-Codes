#include <iostream>
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

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    cout << res;
    return 0;
}