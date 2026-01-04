// smallest number in an array
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {34, 15, 88, 2, 19, -5, 67};
    int ans = INT_MAX;
    for(int i = 0; i < 7; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    cout << "Smallest number in the array is: " << ans << endl;
}