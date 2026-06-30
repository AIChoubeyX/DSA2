#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    int count = 0;
    int maximum = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maximum = max(maximum, count);
        }
        else{
            count = 0;
        }
    }
   cout << maximum;

    return 0;

}