#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 2, 5, 7};

    vector<int> odd;
    vector<int> even;
    int len = nums.size();

    for (int i = 0; i < len; i++)
    {
        if (nums[i] % 2 == 0)
            even.push_back(nums[i]);
        else
            odd.push_back(nums[i]);
    }
    vector<int> op;
    int i = 0;
    int j = 0;
    while (i < len / 2 || j < len / 2)
    {

        op.push_back(even[i]);

        op.push_back(odd[j]);
        i++;
        j++;
    }

    for (auto e : op)
    {
        cout << e << " ";
    }
    return 0;
}