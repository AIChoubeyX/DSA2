// # first and last occurrence of an element in a sorted array
# include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,2,2,3,4,7,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int first = -1, last = -1;
    // Finding first occurrence
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            first = mid;
            right = mid - 1; // Continue searching in the left half
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    // Finding last occurrence
    left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            last = mid;
            left = mid + 1; // Continue searching in the right half
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    // Output the results
    if(first != -1 && last != -1){
        std::cout << "First occurrence: " << first << std::endl;
        std::cout << "Last occurrence: " << last << std::endl;
    }
    else{
        std::cout << "Element not found in the array." << std::endl;
    }
}