#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    
    int arr1[4] = {4, 78, 5, 34};
    int arr2[5] = {46, 8, 54, 3,90};

    int len = 4 + 5;

    int new1[len];
    for (int i = 0; i < 4; i++)
    {
        new1[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        new1[i+4] = arr2[i];
    }

    sort(new1, new1 + len);
    for (int i = 0; i < len; i++)
    {
        cout << new1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        arr1[i] = new1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = new1[i+4];
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";
    }

    
    

    return 0;
}