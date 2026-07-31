#include <iostream>
#include <vector>
using namespace std;

int binarysearch(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        
    }
    return -1;
}
int main(){
    int arrEven[5] = {2, 4, 6, 8, 10};
    int arrOdd[5] = {1, 3, 5, 7, 9};

    int index = binarysearch(arrEven, 5, 6);
    cout << "Index of 6 in arrEven: " << index << endl;

    index = binarysearch(arrOdd, 5, 5);
    cout << "Index of 5 in arrOdd: " << index << endl;
}