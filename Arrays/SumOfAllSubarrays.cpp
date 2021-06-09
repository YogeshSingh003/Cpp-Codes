#include <bits/stdc++.h>
using namespace std;
 
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

for (int i = 0; i < n; i++){
    int sum = 0;
    for(int j = i; j < n; j++)
    {
        sum = sum + arr[j];
    }
    cout << sum << endl;
}

    return 0;
}