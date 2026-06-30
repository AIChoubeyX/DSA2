// brutte force

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

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

    vector<int> temp;

    for(int i=0;i<n;i++)
        temp.push_back(arr1[i]);

    for(int i=0;i<m;i++)
        temp.push_back(arr2[i]);

    sort(temp.begin(), temp.end());

    cout << temp[0] << " ";

    for(int i=1;i<temp.size();i++) {

        if(temp[i] != temp[i-1])
            cout << temp[i] << " ";
    }

    return 0;
}

// optimized two pointer

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr1(n);

    for(int i=0;i<n;i++)
        cin >> arr1[i];

    int m;
    cin >> m;

    vector<int> arr2(m);

    for(int i=0;i<m;i++)
        cin >> arr2[i];

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n && j < m) {

        if(arr1[i] < arr2[j]) {

            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);

            i++;
        }

        else if(arr2[j] < arr1[i]) {

            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);

            j++;
        }

        else {

            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);

            i++;
            j++;
        }
    }

    while(i < n) {

        if(ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);

        i++;
    }

    while(j < m) {

        if(ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);

        j++;
    }

    for(int x : ans)
        cout << x << " ";

    return 0;
}