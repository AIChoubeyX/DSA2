#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int left = 0;
    int right = str.length() - 1;

    while(left < right)
    {
        if(str[left] != str[right])
        {
            cout << "Not Palindrome";
            return 0;
        }

        left++;
        right--;
    }

    cout << "Palindrome";

    return 0;
}


// brute force approach
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;

//     string rev = str;

//     reverse(rev.begin(), rev.end());

//     if(str == rev)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }