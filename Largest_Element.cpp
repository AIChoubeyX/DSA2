// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     cin>> arr[i];

//     cout << *max_element(arr.begin(), arr.end());

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    cout << largest;

    return 0;
}