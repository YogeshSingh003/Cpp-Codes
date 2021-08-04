#include <iostream>
#include <vector>
using namespace std;

void per(vector<int> s, int idx)
{
    if (s.size() <= idx)
    {
        for (auto e : s)
            cout << e << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        per(s, idx + 1);
        swap(s[idx], s[i]);
    }
}

int main()
{
    per({1, 2, 3}, 0);

    return 0;
}