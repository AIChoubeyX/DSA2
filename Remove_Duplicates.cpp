// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     sort(arr.begin(), arr.end());

//     vector<int> ans;

//     ans.push_back(arr[0]);

//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i] != arr[i-1])
//             ans.push_back(arr[i]);
//     }

//     for(int x : ans)
//         cout << x << " ";
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int i=0;
    
    for(int j=1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
cout << "Unique Elements : ";

    for(int k = 0; k <= i; k++)
        cout << arr[k] << " ";
}