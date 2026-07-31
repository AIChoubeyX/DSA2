#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int maxProd = arr[0];
    int minProd = arr[0];
    int ans = arr[0];

    for(int i = 1; i < n; i++)
    {
        // If current element is negative,
        // swap max and min because multiplying
        // by a negative flips their roles.
        if(arr[i] < 0)
            swap(maxProd, minProd);

        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);

        ans = max(ans, maxProd);
    }

    cout << ans;
}