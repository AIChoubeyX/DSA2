// brute force O(n^3)
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxi = INT_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;

            for(int k=i;k<=j;k++)
            {
                sum += arr[k];
            }

            if(sum>maxi)
                maxi=sum;
        }
    }

    cout<<maxi;

    return 0;
}

// Approach 2 — Better (O(N²))

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxi = INT_MIN;

    for(int i=0;i<n;i++)
    {
        int sum=0;

        for(int j=i;j<n;j++)
        {
            sum += arr[j];

            if(sum>maxi)
                maxi=sum;
        }
    }

    cout<<maxi;

    return 0;
}

// Approach 3 — Optimal (Kadane's Algorithm)

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        maxi = max(maxi , sum);
        
        if(sum<0)
        sum = 0;

        
    }

    cout << maxi;
    return 0;
}


// // Money

// ↓

// Running Balance

// ↓

// Highest Balance

// ↓

// Negative Balance?

// ↓

// Throw it away