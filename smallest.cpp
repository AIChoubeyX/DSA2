#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << smallest;

    return 0;   
}

// 2nd smallest
// int smallest = INT_MAX;
// int secondSmallest = INT_MAX;

// for(int i = 0; i < n; i++) {
// if(arr[i] < smallest) {
// secondSmallest = smallest;
// smallest = arr[i];
// }
// else if(arr[i] > smallest && arr[i] < secondSmallest) {
// secondSmallest = arr[i];
// }
// }
// cout << secondSmallest;