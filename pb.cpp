#include <iostream>
using namespace std;

int main()
{
    int add = 0;
    for (int i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 5 == 0 || i % 7 == 0 || i % 9 == 0)
            {
                cout << i << " ";
                continue;
            }

            add = add + i;
        }
    }
    cout << endl;
    cout << endl;
    cout << "answer : " << add;

    return 0;
}