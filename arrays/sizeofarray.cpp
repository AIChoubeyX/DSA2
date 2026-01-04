// num of elements in an array using sizeof operator
# include<iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Size of the array is: "<<size<<endl;
    return 0;
}

//     int size = sizeof(arr)/sizeof(arr[0]); 
//  here sizeof(arr) gives total size of array in bytes
//  and sizeof(arr[0]) gives size of first element of array in bytes    
//  Dividing these two gives number of elements in the array