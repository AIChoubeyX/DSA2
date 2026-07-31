# include <iostream>
# include <vector>
using namespace std;

int firstOcurr(int arr[], int size, int key){

    // first case
    int s=0 , e = size-1 , mid = s + (e-s)/2;
    int target = -1;

    while(s<=e){
        if(arr[mid] ==key){
            target = mid;
            e = mid-1;
        }
        // right side
        else if(arr[mid] < key){
            s = mid+1;
        }
        // left side
        else if(arr[mid] > key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return target;
    
}

int lastOcurr(int arr[], int size, int key){

    // first case
    int s=0 , e = size-1 , mid = s + (e-s)/2;
    int target = -1;

    while(s<=e){
        if(arr[mid] ==key){
            target = mid;
            s = mid+1;
        }
        // right side
        else if(arr[mid] < key){
            s = mid+1;
        }
        // left side
        else if(arr[mid] > key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return target;
    
}

int main(){

    int arr[5] = {1,1,2,3,3};

    int index = firstOcurr(arr, 5, 3);
    cout << "First Occurrence of 3: " << index << endl;
    cout << "Last Occurrence of 3: " << lastOcurr(arr, 5, 3) << endl;

}