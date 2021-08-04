#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> ip, vector<int> op, int index)
{
    if (index >= ip.size())
    {
        for (auto e : op)
            cout << e << " ";
        cout << endl;
        return;
    }

    subset(ip, op, index + 1);
    op.push_back(ip[index]);
    subset(ip, op, index + 1);
}

int main()
{
    vector<int> v = {1, 2, 3};
    vector<int> empty = {};
    subset(v, empty, 0);
    return 0;
}