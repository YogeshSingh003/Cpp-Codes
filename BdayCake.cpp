#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {3, 2, 1, 3};
    sort(v.begin(), v.end());
    int x = v[v.size() - 1];
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            count++;
    }
    cout << count;
    return 0;
}