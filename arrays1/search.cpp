// search an element in an array and return its index
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int ans = 4;
    int index = -1;

    for(int i=0;i<5;i++){
        if (arr[i] == ans) { 
            index = i;
            break ;
        }
    }
    cout << index << endl;
    return 0;
}