#include <iostream>
using namespace std;

bool sorted(int arr[], int index)
{
    if (index == 5)
        return true;

    if (arr[index] < arr[index - 1])
        return false;

    sorted(arr, index + 1);
}

int main()
{

    int arr[5] = {1, 30, 5, 6, 8};
    cout << sorted(arr, 1);
    return 0;
}