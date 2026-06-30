// in a sorted find the index no of an element..like a number is given what should be its index no
# include<iostream>
using namespace std;

int IndexNo(int arr[], int n, int target){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2; // To prevent overflow
        if(arr[mid] == target){
            return mid; // Element found at index mid
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1; // Element not found
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

    int index = IndexNo(arr, n, target);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
}