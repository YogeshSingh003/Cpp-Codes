#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int n  ;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int mx = 0;
    int currentLength = -1;
    int st = 0, end = 0;

    while (arr[i] != '\0')
    {
        if (currentLength == -1)
        {
            currentLength = 1;
        }
        
        if (arr[i] == ' ')
        {
            currentLength = 0;
            // st = i + 1;
        }
        
        i++;

        mx = max(mx, currentLength);
        end = mx;
        if (currentLength == mx)
        {
            st = i - end ;
        }
        currentLength++;
    }
    cout << mx<<endl;
    for (int i = 0; i < end; i++)
    {
        cout << arr[st+i];
    }
    

    return 0;
}