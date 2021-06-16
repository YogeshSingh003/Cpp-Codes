#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int n ;
    cin >> n;
    cin.ignore();
    char arr[n + 1] ;
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int mx = 0;
    int currentLength = -1;

    while (arr[i] != '\0')
    {
        if (currentLength == -1)
        {
            currentLength = 1;
        }
        
        if (arr[i] == ' ')
        {
            currentLength = 0;
        }

        mx = max(mx, currentLength);
        currentLength++;
        i++;
    }
    cout << mx;

    return 0;
}