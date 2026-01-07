// second maximum element in an array
#include <iostream>
#include <climits>
using namespace std;

int main (){
    int arr[5] = {1,2,3,14,5};
    int ans = INT_MIN;

    for(int i=0;i<5;i++){
        if (arr[i] > ans) { 
            ans = arr[i];
        }
    }
    int secondmax = -1;

    for(int i=0;i<5;i++){
        if (ans != arr[i]) { 
            secondmax = max(secondmax, arr[i]);    
        }
    }
    cout << secondmax << endl;
    
}