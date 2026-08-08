// Question 3.4: Custom Encoding
// Scenario: A messaging app encodes text using this rule: Every character is replaced by the character K positions ahead in the alphabet (circular). If K = 3, A becomes D, Z becomes C. Digits are replaced by (digit + K) % 10. Special characters remain unchanged.
// Input: First line: integer K. Second line: string S.
// Output: Encoded string

// Input:  3
//         Hello World! 99
// Output: Khoor Zruog! 22

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    cin.ignore();

    string s;
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // Uppercase letters
        if(ch >= 'A' && ch <= 'Z')
        {
            s[i] = ((ch - 'A' + k) % 26) + 'A';
        }

        // Lowercase letters
        else if(ch >= 'a' && ch <= 'z')
        {
            s[i] = ((ch - 'a' + k) % 26) + 'a';
        }

        // Digits
        else if(ch >= '0' && ch <= '9')
        {
            s[i] = ((ch - '0' + k) % 10) + '0';
        }

        // Special characters remain unchanged
    }

    cout << s;

    return 0;
}