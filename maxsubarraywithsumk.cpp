#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int k;
    cin >> k;

    unordered_map<int,int> mp;

    int result = 0;
    int cumSum = 0;

    mp[0] = 1;

    for(int i = 0; i < n; i++)
    {
        cumSum += nums[i];

        if(mp.find(cumSum - k) != mp.end())
        {
            result += mp[cumSum - k];
        }

        mp[cumSum]++;
    }

    cout << result;

    return 0;
}