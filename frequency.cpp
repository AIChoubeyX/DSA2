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

    for(auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}


// one element with maximum frequency

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

    // Count frequency
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int element;

    // Find maximum frequency
    for(auto it : mp)
    {
        if(it.second > maxFreq)
        {
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "Highest occurring element: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}