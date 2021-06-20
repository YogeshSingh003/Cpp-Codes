#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n == 1){
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return arr[0] < arr[1] && restArray;
}

int main()
{
int n;
cout << "Enter the length of array"<<endl;
cin >> n;

int arr[n];

cout << "Enter input of array"<<endl;
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}

if(sorted(arr, n))
    cout << "Sorted";
else
    cout << "Not sorted";



return 0;
}