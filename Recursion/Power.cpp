#include <iostream>
using namespace std;

int power(int n, int pow) // O(n)
{
    if (pow == 0)
        return 1;
    return n * power(n, pow - 1);
}

int power2(int n, int pow) // O(log(n))
{
    if (pow == 0)
        return 1;

    int answer = power2(n, pow / 2);
    if (pow & 1)
        return n * answer * answer;
    else
        return answer * answer;
}

int main()
{
    int n, pow;
    cin >> n >> pow;

    cout << power(n, pow);
    cout << endl;
    cout << power2(n, pow);
    return 0;
}