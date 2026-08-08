// numbers appears more than n/2 times in array


// brtutee force approach
// for(int i=0;i<n;i++)
// {
//     int count = 0;
//     for(int j=0;j<n;j++)
//     {
//         if(arr[i] == arr[j])
//             count++;
//     }

//     if(count > n/2)
//     {
//         cout << arr[i];
//         return 0;
//     }
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Take input
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Candidate element
    int element = -1;

    // Count of candidate
    int count = 0;


    // ----------- FIND CANDIDATE -----------

    for(int i = 0; i < n; i++)
    {
        // If count becomes 0,
        // choose current element as candidate
        if(count == 0)
        {
            element = arr[i];
            count = 1;
        }

        // If current element is same as candidate
        else if(arr[i] == element)
        {
            count++;
        }

        // If current element is different
        else
        {
            count--;
        }
    }


    // ----------- VERIFY CANDIDATE -----------

    int count1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count1++;
        }
    }


    // Check whether candidate is actually
    // a majority element
    if(count1 > n / 2)
    {
        cout << element;
    }
    else
    {
        cout << -1;
    }

    return 0;
}