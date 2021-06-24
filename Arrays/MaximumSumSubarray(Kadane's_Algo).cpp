#include <iostream>
#include <limits.h>
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

// int mx = INT_MIN;
// int start = -1;
// int end = -1;

// for (int  i = 0; i < n; i++)
// {
// int sum = 0;
//     for(int j = i; j < n; j++)
//     {
//         sum = sum + arr[j];
//         if (mx < sum)
//         {
//             mx = sum;
//             start = i;
//             end = j;
//         }
        
//     }
// }
// cout << "Starting index = " << start << endl;
// cout << "ending index = " << end << endl;
// cout << mx << endl;

int currentSum = 0;
int maxNo = INT_MIN;

for (int i = 0; i < n; i++)
{
    currentSum = currentSum + arr[i];
    if (currentSum < 0)
    {
        currentSum = 0;
    }
    maxNo = max(maxNo, currentSum);
}

cout << maxNo;

return 0;
}