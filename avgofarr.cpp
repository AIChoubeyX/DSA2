# include<iostream>
#include<vector>
using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

     int sum = 0;
     for(int i =0 ; i< n; i++){
        sum = sum + arr[i];
     } 
     int avg = sum/n;
     cout << avg;  
}