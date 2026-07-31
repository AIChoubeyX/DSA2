#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    string result = "";

    while(ss >> word)
    {
        result = word + " " + result;
    }

    // Remove the last extra space
    result.pop_back();

    cout << result;

    return 0;
}