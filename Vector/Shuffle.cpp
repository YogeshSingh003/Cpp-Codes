#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int n = 3;
    vector<int> ans(2 * n);
    int j = 0;
    for (int i = 0; i < n * 2; i += 2)
    {
        ans[i] = nums[j];
        ans[i + 1] = nums[j + n];
        j++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}