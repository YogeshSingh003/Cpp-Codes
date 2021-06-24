#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter input of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int step = 0;
    int i = 0;
    while(i<n)
    {
        int inc = 0;
        inc = arr[i];
        i = i + inc;
        if(arr[i+1] == 0){
            i = i+2;
            n = n - 1;
            continue;
        }
        step++;
        if(i >= n-1)
            break;
        
    }
    cout << step;
    return 0;
}