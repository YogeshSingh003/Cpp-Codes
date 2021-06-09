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

int diff = abs(arr[0] - arr[1]);
int diff2;
int start = 0;
int end = 0;
int len;
int MaxLen = 0;
bool check = true;

for (int i = 0; i < n-1; i++)
{
    check = true;
    diff2 = abs(arr[i] - arr[i + 1]);
    if(diff == diff2){
        end += 1;
        check = false;
    }

    diff = diff2;

    if (check)
    {
        start = end;
        end += 1;
    }

    len = end - start;
    MaxLen = max(len,MaxLen);
}
MaxLen += 1;
cout << MaxLen;

return 0;
}