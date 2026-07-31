//  reverse for a given index number ..like if m = 2 then reverse from 3 rd index to last index
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//         cin >> arr[i];

//     reverse(arr.begin() + n - m, arr.end());
//     for(int i=0;i<n;i++)
//         cout << arr[i] << " ";
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

  int start = n - m;
  int end = n - 1;
  while(start <= end){
      swap(arr[start], arr[end]);
      start++;
      end--;
  }
  for(int i=0;i<n;i++)
      cout << arr[i] << " ";
}