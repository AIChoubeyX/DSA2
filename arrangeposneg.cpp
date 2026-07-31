#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];

    vector<int> ans(n);

    int pos = 0;
    int neg = 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }

    for(int i=0;i<n;i++)
        cout << ans[i] << " ";

    return 0;
}