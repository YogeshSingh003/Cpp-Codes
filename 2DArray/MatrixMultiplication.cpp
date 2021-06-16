#include <iostream>
using namespace std;

int main()
{
    int l, m, n;
    cin >> l >> m >> n;
    int arr1[l][m];
    int arr2[m][n];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }

     for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout << endl;
        
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;

    int ans[l][n];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}