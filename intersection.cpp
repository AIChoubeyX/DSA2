#include <iostream>
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

    int i = 0;
    int j = 0;

    // Find common elements
    while(i < n && j < m)
    {
        // arr1 element is smaller
        if(arr1[i] < arr2[j])
        {
            i++;
        }

        // arr2 element is smaller
        else if(arr1[i] > arr2[j])
        {
            j++;
        }

        // Both elements are equal
        else
        {
            cout << arr1[i] << " ";

            i++;
            j++;
        }
    }

    return 0;
}