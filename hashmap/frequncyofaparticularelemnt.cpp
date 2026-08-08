// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

    

//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]]++;
//     }
//     int x;
//     cin >> x;

//     cout << mp[x];

//     return 0;
// }

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int x;
    cin >> x;

    if(mp.find(x) != mp.end())
    {
        cout << "Frequency = " << mp[x];
    }
    else
    {
        cout << "Element not present";
    }

    return 0;
}