// #include <iostream>
// using namespace std;

// void swap(int n, int m)
// {
//     int c = n;
//     n = m;
//     m = c;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers";
//     cin >> a >> b;
//     swap(a, b);
//     cout << "After swapping: " << a << " " << b << endl;
// }

//  it doenst swap because we are passing by value
//  to swap we have to pass by reference

#include <iostream>
using namespace std;

void swap(int & n, int & m)
{
    int c = n;
    n = m;
    m = c;
}

int main()
{
    int a, b;
    cout << "Enter two numbers";
    cin >> a >> b;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
}