// // Armstrong Number Checker
// #include <iostream>
// #include <cmath>
// using namespace std;

// int countdigits(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

// bool armstrong(int num, int digit)
// {
//     int n = num, ans = 0, rem;
//     while (n)
//     {
//         rem = n % 10;
//         n /= 10;
//         ans +=(int) pow(rem, digit);
//     }
//     if (ans == num)
//         return 1;
//     else
//         return 0;
// }

// int main()
// {

//     int num;
//     cin >> num;
//     int digit = countdigits(num);
//     cout << armstrong(num, digit);
// }


#include <iostream>
using namespace std;

int countdigits(int n)
{
    if (n == 0) return 1;

    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        int power = 1;
        for (int i = 0; i < digit; i++)
            power *= rem;
        ans += power;
        n /= 10;
    }

    return ans == num;
}

int main()
{
    int num;
    cin >> num;

    int digit = countdigits(num);

    if (armstrong(num, digit))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
