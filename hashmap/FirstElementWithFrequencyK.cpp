#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int freq;
    cin >> freq;

    bool found = false;

    for (auto it : mp)
    {
        if (it.second == freq)
        {
            cout << it.first << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No element has frequency " << freq;
    }

    return 0;
}