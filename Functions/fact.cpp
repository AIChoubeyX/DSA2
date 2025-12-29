#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int a;
    cout << "Enter a positive integer: ";
    cin >> a;
    cout << fact(a);
}

// if we not pass an argument then it will give error
//  to avoid this we can give default argument
// int fact(int n=1)
// differnce between pass by value and pass by reference
// pass by value means a copy of actual parameter is passed to the function
// pass by reference means address of actual parameter is passed to the function