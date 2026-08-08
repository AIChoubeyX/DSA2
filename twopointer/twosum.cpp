#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++)
    {
        // Number needed to make the target
        int remaining = target - arr[i];

        // Check if remaining number already exists
        if(mp.find(remaining) != mp.end())
        {
            cout << "Indices : "
                 << mp[remaining]
                 << " "
                 << i << endl;

            cout << "Elements : "
                 << remaining
                 << " "
                 << arr[i];

            return 0;
        }

        // Store current element with its index
        mp[arr[i]] = i;
    }

    cout << "No Pair Found";

    return 0;
}