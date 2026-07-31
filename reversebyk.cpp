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


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     // Edge Case 1: Empty array
//     if (n <= 0)
//         return 0;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int k;
//     cin >> k;

//     // Edge Case 2: Handle negative k
//     k = ((k % n) + n) % n;

//     // Edge Case 3: No rotation needed
//     if (k == 0)
//     {
//         for (int i = 0; i < n; i++)
//             cout << arr[i] << " ";
//         return 0;
//     }

//     reverse(arr, arr + k);
//     reverse(arr + k, arr + n);
//     reverse(arr, arr + n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }