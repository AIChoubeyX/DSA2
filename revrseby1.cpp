//  Reverse the array
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++)
//         cin >> arr[i];

//     reverse(arr, arr+n);

//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";

//     return 0;
// 
// another method to reverse the array
 
// int i=0, j=n-1;
// while(i<j){
//     swap(arr[i], arr[j]);
//     i++;
//     j--;
// }

// }

//  reverse the array by 1
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
     int arr[n];
     for(int i=0;i<n;i++)
         cin >> arr[i];

     int temp = arr[0];
     for(int i=0;i<n-1;i++){
         arr[i] = arr[i+1];
     }
     arr[n-1] = temp;
     for(int i=0;i<n;i++)
         cout << arr[i] << " ";
}