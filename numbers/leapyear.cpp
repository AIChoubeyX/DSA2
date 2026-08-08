#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else if (year % 100 == 0)
    {
        cout << "Not a Leap Year";
    }
    else if (year % 4 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }

    return 0;
}


// all factors of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}