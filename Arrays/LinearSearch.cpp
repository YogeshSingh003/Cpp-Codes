#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Give input in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key" << endl;
    cin >> key;
    bool found = true;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            cout <<"Index -- "<< i;
            found = false;
        }
    }
    
    if(found)
        cout << "Sorry not found";

    return 0;
}