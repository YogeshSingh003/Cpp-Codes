#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};

    vector<pair<int, int>> v;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        v[i].first = i;
    }
    sort(v.begin(), v.end(), compare);

    for (auto element : arr)
    {
        cout << element << "  ";
    }
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        arr[i] = v[i].first;
    }
    for (auto element : arr)
    {
        cout << element << "   ";
    }
    return 0;
}