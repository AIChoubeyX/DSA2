#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a;

    return 0;
}

// lcm

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a;
    int y = b;

    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;

    int lcm = (a * b) / gcd;

    cout << lcm;

    return 0;
}