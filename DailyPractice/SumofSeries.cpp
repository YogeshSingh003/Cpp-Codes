#include <iostream>
using namespace std;

float factorial(float n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    

    return factorial;
}
int main()
{
    float n ;
    cin >> n;
    float oddSeries = 0;
    float evenSeries= 0;

    
    for (int i = 2; i <= n; i++)
    {

        if(i%2==0){
            float temp = i / factorial(i);
            oddSeries = oddSeries + temp;
        }
        else{
            float temp2 = i / factorial(i);
            evenSeries = evenSeries + temp2;

        }
    }

    float series = 1 - (oddSeries - evenSeries);
    cout << series;
    return 0;
}