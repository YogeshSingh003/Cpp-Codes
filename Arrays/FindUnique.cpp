#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int m ;
    // cout << "Enter value of m : " << endl;
    cin >> m;
    int n = m * 2 + 1;          
    int arr[n];

    // cout << "Enter input of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i+1])
        {
            i++;
        }
        else{
            cout << arr[i];
        }
        
    }
    

    return 0;
}