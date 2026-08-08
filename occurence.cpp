#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    // ---------- First Occurrence ----------
    int s = 0;
    int e = n - 1;
    int first = -1;

    while(s <= e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
        {
            first = mid;
            e = mid - 1;      // Search left
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    // ---------- Last Occurrence ----------
    s = 0;
    e = n - 1;
    int last = -1;

    while(s <= e)
    {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
        {
            last = mid;
            s = mid + 1;      // Search right
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    if(first == -1)
    {
        cout << "Element not found";
    }
    else
    {
        // cout << "First Occurrence : " << first << endl;
        // cout << "Last Occurrence  : " << last << endl;
        cout << "Total Occurrences : " << last - first + 1;
    }

    return 0;
}


// for unsorted array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int first = -1;
    int last = -1;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            // First time we found the element
            if(first == -1)
            {
                first = i;
            }

            // Every time we find the element
            last = i;

            count++;
        }
    }

    if(first == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "First Occurrence : " << first << endl;
        cout << "Last Occurrence : " << last << endl;
        cout << "Total Occurrences : " << count;
    }

    return 0;
}