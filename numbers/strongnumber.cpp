#include<iostream>
using namespace std;

int main()
{
    int fact[10] =
    {
        1,
        1,
        2,
        6,
        24,
        120,
        720,
        5040,
        40320,
        362880
    };

    int n;
    cin >> n;

    int original = n;

    int sum = 0;

    while(n > 0)
    {
        int digit = n % 10;

        sum += fact[digit];

        n /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}