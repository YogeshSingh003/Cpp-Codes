#include <iostream>
#include <string>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[256];

    cout << "Enter input of array" << endl;
    for (int i = 0; i < 256; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int x = int(s[i]);
        if (arr[s[i]] == 0)
        {
            arr[s[i]] = x;
        }
        else
        {

            arr[s[i]] += 1;
        }
    }
    int mx = INT_MIN;
    int chr = 0;

    for (int i = 0; i < 256; i++)
    {
        if (arr[i] != 0)
        {
            if (arr[i] != i)
            {
                int repeat = arr[i] - i;
                mx = max(mx, repeat);
                if (mx == repeat)
                {
                    chr = i;
                }
            }
            else
            {
                chr = '0';
            }
            
        }
    }
    cout << char(chr);

    return 0;
}