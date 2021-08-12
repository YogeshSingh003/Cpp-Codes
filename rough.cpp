#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {3, 7, 2, 7, 2, 8, 4, 4, 5, 4, 3, 4};

    unsigned long long int x = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        x = x + arr[i];
        if (i < arr.size() - 1)
            x = x * 10;
    }
    x = x + 1;
    string s = to_string(x);
    int len = s.size();
    int a = 0;
    vector<int> ar(len);
    for (int i = 0; i < len; i++)
    {
        a = x % 10;
        x = x / 10;
        ar[len - i - 1] = a;
    }
    for (auto e : ar)
    {
        cout << e << " ";
    }

    return 0;
}