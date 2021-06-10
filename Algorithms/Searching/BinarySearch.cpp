#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[],int key,int n){
    int s = 0;
    int e = n;
    
    while (s<=e)
    {
        int mid = (s + e) / 2;

        if (key == arr[mid])
            return mid;
        
        else if(key > arr[mid])
            s = mid + 1;
        
        else
            e = mid - 1;
    }
        return -1;
}

int main()
{
    int n;
    cout << "Enter the length of array"<<endl;
    cin >> n;

    int arr[n];

    cout << "Note : Array should be sorted"<<endl;
    cout << "Enter input of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter Key"<<endl;
    cin >> key;

    cout << binarySearch(arr, key, n);

    return 0;
}