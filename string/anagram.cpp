#include<iostream>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    if(s1.length() != s2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    int freq[26] = {0};

    for(char ch : s1)
    {
        freq[ch - 'a']++;
    }

    for(char ch : s2)
    {
        freq[ch - 'a']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}


// brute force approach
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    if(s1.length() != s2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}



// // Count characters of first string
// for(char ch : s1)
//     freq[ch - 'a']++;

// // Remove characters of second string
// for(char ch : s2)
//     freq[ch - 'a']--;

// // Check if everything is balanced
// for(int i = 0; i < 26; i++)
// {
//     if(freq[i] != 0)
//     {
//         cout << "Not Anagram";
//         return 0;
//     }
// }

// cout << "Anagram";