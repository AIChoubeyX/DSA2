// Question 3.2: PAN Card Validator
// Scenario: A PAN card number in India follows this format: AAAAA1111A (5 uppercase letters, 4 digits, 1 uppercase letter). Check if a given string is a valid PAN card number.
// Input: A single string S
// Output: "Valid" or "Invalid"

// Input:  ABCDE1234F
// Output: Valid

// Input:  ABCDE12345
// Output: Invalid

// Input:  abcde1234F
// Output: Invalid
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Length must be exactly 10
    if(s.length() != 10)
    {
        cout << "Invalid";
        return 0;
    }

    // First 5 characters must be uppercase letters
    for(int i = 0; i < 5; i++)
    {
        if(s[i] < 'A' || s[i] > 'Z')
        {
            cout << "Invalid";
            return 0;
        }
    }

    // Next 4 characters must be digits
    for(int i = 5; i < 9; i++)
    {
        if(s[i] < '0' || s[i] > '9')
        {
            cout << "Invalid";
            return 0;
        }
    }

    // Last character must be uppercase
    if(s[9] < 'A' || s[9] > 'Z')
    {
        cout << "Invalid";
        return 0;
    }

    cout << "Valid";

    return 0;
}