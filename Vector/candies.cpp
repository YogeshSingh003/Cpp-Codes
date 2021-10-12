#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    vector<int> candies = {4, 2, 1, 1, 2};
    int extraCandies = 1;

    int mx = INT_MIN;
    for (int i = 0; i < candies.size(); i++)
    {
        mx = max(candies[i], mx);
    }

    vector<bool> check;
    for (int i = 0; i < candies.size(); i++)
    {
        if (mx <= candies[i] + extraCandies)
            check.push_back(true);
        else
            check.push_back(false);
    }

    for (int i = 0; i < check.size(); i++)
    {
        cout << check[i] << " ";
    }

    return 0;
}