#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v = {1, 2, 4};
    v.push_back(6);
    v.push_back(90);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.pop_back();

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    vector<int> v2(3, 50);
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    swap(v, v2);
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    return 0;
}