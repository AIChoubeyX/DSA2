#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[m];

    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    unordered_set<int> s;

    // Store first array in the set
    for(int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    bool subset = true;

    // Check second array
    for(int i = 0; i < m; i++)
    {
        if(s.find(arr2[i]) == s.end())
        {
            subset = false;
            break;
        }
    }

    if(subset)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}