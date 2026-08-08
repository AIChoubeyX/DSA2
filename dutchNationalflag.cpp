#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int i = 0 ; //for 0
    int j = 0; //for 1
    int k = n-1; //for 2

    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else{
            swap(arr[j],arr[k]);
            k--;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}