//  convert a to A.....and so on
#include <iostream>
using namespace std;

char convert(char n)
{
    return n - ('a' - 'A');
}


int main() {
    char name;
    cout << "Enter a lowercase letter: ";
    cin >> name;
    cout << convert(name);
}