#include <iostream>
using namespace std;

void unionArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;

    int last = -1;     // Last printed element

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

    while(i < n)
    {
        if(arr1[i] != last)
        {
            cout << arr1[i] << " ";
            last = arr1[i];
        }
        i++;
    }

    while(j < m)
    {
        if(arr2[j] != last)
        {
            cout << arr2[j] << " ";
            last = arr2[j];
        }
        j++;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr1[n];

    for(int i=0;i<n;i++)
        cin >> arr1[i];

    int m;
    cin >> m;

    int arr2[m];

    for(int i=0;i<m;i++)
        cin >> arr2[i];

    unionArray(arr1, arr2, n, m);

    return 0;
}