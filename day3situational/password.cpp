// Question 3.1: Password Strength Checker
// Scenario: A company wants to check password strength. A password is:
// "Strong" if it has ≥ 8 characters, contains at least 1 uppercase, 1 lowercase, 1 digit, and 1 special character (@#$%^&*!)
// "Moderate" if it has ≥ 6 characters and contains at least 2 of the 4 categories above
// "Weak" otherwise
// Input: A single string S (password)
// Output: "Strong" or "Moderate" or "Weak"

// Input:  Hello@123
// Output: Strong

// Input:  hello1
// Output: Moderate

// Input:  abc
// Output: Weak

#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if(ch >= 'A' && ch <= 'Z')
            upper = true;

        else if(ch >= 'a' && ch <= 'z')
            lower = true;

        else if(ch >= '0' && ch <= '9')
            digit = true;

        else if(ch=='@' || ch=='#' || ch=='$' || ch=='%' ||
                ch=='^' || ch=='&' || ch=='*' || ch=='!')
            special = true;
    }

    int count = upper + lower + digit + special;

    if(s.length() >= 8 &&
       upper &&
       lower &&
       digit &&
       special)
    {
        cout << "Strong";
    }
    else if(s.length() >= 6 && count >= 2)
    {
        cout << "Moderate";
    }
    else
    {
        cout << "Weak";
    }

    return 0;
}