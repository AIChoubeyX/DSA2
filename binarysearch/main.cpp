# include<iostream>
using namespace std;

void BinarySearch(int arr[], int n, int target){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        // int mid =  (right + left) / 2;
        int mid = left + (right - left) / 2; // To prevent overflow
        if(arr[mid] == target){
            cout<<"Element found at index: "<<mid<<endl;
            return;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout<<"Element not found in the array."<<endl;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element: ";
    cin>>target;

    BinarySearch(arr, n, target);

    
}