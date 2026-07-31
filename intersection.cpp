#include <iostream>
using namespace std;

void intersectionArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }

        else if(arr1[i] > arr2[j])
        {
            j++;
        }

        else
        {
            cout << arr1[i] << " ";

            i++;
            j++;
        }
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

    intersectionArray(arr1, arr2, n, m);

    return 0;
}