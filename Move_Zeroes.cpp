//  Move Zeroes to the End
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];

    int i =0;
    
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

}