#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int mid = (n + 1) / 2;

    reverse(arr.begin() + mid, arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}



    // reverse(arr.begin() + mid, arr.end());

    // for(int x : arr)
    //     cout << x << " ";...explain this