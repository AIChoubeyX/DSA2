# include <iostream>
using namespace std;

// int mmain (){
//     int arr[5] = {1,2,3,4,5};
//     int temp[5];
//     int i = 4;
//     int j = 0;

//     while(arr[i] >= 0){
//         temp[j] = arr[i];
//         i--;
//         j++;
//     }
//     for(int k=0; k<5; k++){
//         cout << temp[k] << " ";
//     }
//     cout << endl;
// }


int main(){
    // int arr[6] = {1,2,3,4,5,6};
    int arr[5] = {1,2,3,4,5};
    
    int start = 0;
    int end = 4;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}