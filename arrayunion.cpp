#include <iostream>
#include <algorithm>
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

    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int i = 0;
    int j = 0;

    int last = -1;

    // Compare both arrays
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            if(arr1[i] != last)
            {
                cout << arr1[i] << " ";
                last = arr1[i];
            }

            i++;
        }

        else if(arr1[i] > arr2[j])
        {
            if(arr2[j] != last)
            {
                cout << arr2[j] << " ";
                last = arr2[j];
            }

            j++;
        }

        else
        {
            if(arr1[i] != last)
            {
                cout << arr1[i] << " ";
                last = arr1[i];
            }

            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    while(i < n)
    {
        if(arr1[i] != last)
        {
            cout << arr1[i] << " ";
            last = arr1[i];
        }

        i++;
    }

    // Remaining elements of arr2
    while(j < m)
    {
        if(arr2[j] != last)
        {
            cout << arr2[j] << " ";
            last = arr2[j];
        }

        j++;
    }

    return 0;
}