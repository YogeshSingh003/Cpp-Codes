#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n] ;

    cout << "Enter input of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT_MIN;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        
        bool check1 = false;
        bool check2 = false;

        
        
            if (mx < arr[i])
                check1 = true;

            if (arr[i] > arr[i + 1])
                check2 = true;
            

            if(i == n-1)
                check2 = true;
            
            if (check1 && check2)
                counter += 1;

            mx = max(mx, arr[i]);
    }
    cout << counter;

    return 0;
}