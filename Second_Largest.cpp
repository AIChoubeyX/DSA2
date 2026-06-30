// # include<iostream>
// # include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//         cin >> arr[i];

//     int largest = arr[0];
//     int second_largest = -1;

//     for(int i=1;i<n;i++){
//         if(arr[i] > largest){
//             second_largest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] < largest && arr[i] > second_largest){
//             second_largest = arr[i];
//         }
//     }

//     cout << second_largest;

//     return 0;
// }



#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x > largest)
        {
            secondLargest = largest;
            largest = x;
        }
        else if(x != largest && x > secondLargest)
        {
            secondLargest = x;
        }
    }

    if(secondLargest == INT_MIN)
        cout << "No Second Largest";
    else
        cout << secondLargest;
}

// The only improvement I would make for a real TCS NQT submission is to handle the case where no second largest exists explicitly:

// if (secondLargest == INT_MIN)
//     cout << -1;   // or print the message required by the problem
// else
//     cout << secondLargest;