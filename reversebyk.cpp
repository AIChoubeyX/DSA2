#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int k;
    cin >> k;

    k = k % n;

    reverse(arr, arr+k);

    reverse(arr+k, arr+n);

    reverse(arr, arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}