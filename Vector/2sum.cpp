#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> v;
    v = nums;
    sort(nums.begin(), nums.end());
    vector<int> indx;

    int i = 0, n1, n2;
    int j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] + nums[j] < target)
            i++;
        else if (nums[i] + nums[j] > target)
            j--;
        else
        {
            n1 = nums[i];
            n2 = nums[j];
            break;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (v[i] == n1 || v[i] == n2)
            indx.push_back(i);
        if (indx.size() == 2)
            break;
    }

    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             indx.push_back(i);
    //             indx.push_back(j);
    //         }
    //     }
    // }

    for (int i = 0; i < indx.size(); i++)
    {
        cout << indx[i] << " ";
    }
    return 0;
}