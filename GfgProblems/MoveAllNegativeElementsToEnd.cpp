#include <iostream>
using namespace std;

void segregateElements(int arr[], int n)
{
    int lenOfNeg = 0;
    int lenOfPos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            lenOfNeg++;
        else
            lenOfPos++;
    }

    int pos[lenOfPos];
    int neg[lenOfNeg];

    int ps = 0, ng = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg[ng] = arr[i];
            ng++;
        }
        else
        {
            pos[ps] = arr[i];
            ps++;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    ps = 0, ng = 0;

    for (int i = 0; i < n; i++)
    {
        if(ps<lenOfPos){
            arr[i] = pos[ps];
            ps++;
        }
        else
        {
            arr[i] = neg[ng];
            ng++;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
    // for (int i = 0; i < ng; i++)
    // {
    //     cout << neg[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < ps; i++)
    // {
    //     cout << pos[i] << " ";
    // }
}

int main()
{
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    return 0;
}