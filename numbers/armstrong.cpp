# include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int temp = n;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}