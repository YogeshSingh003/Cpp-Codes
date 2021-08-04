// count total no of path from starting to ending point if you can take jumps which are come in dice

#include <iostream>
using namespace std;

int jump(int s, int e)
{
    if (e < s)
        return 0;

    if (e == s)
        return 1;

    return jump(s, e - 6) + jump(s, e - 5) + jump(s, e - 4) + jump(s, e - 3) + jump(s, e - 2) + jump(s, e - 1);
}

int main()
{

    cout << jump(0, 3);
    return 0;
}