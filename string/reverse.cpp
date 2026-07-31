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
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    cout << str;

    return 0;
}


// using built-in function
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;

//     reverse(str.begin(), str.end());

//     cout << str;

//     return 0;
// }