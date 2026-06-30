// optimized
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the expected sum of first n natural numbers
    int expected_sum = n * (n + 1) / 2;

    // Calculate the actual sum of the array elements
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    // The missing number is the difference between expected and actual sums
    int missing_number = expected_sum - actual_sum;
    
    cout << "The missing number is: " << missing_number << endl;
}

// brute force 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n-1];
        for(int i=0;i<n-1;i++)
            cin >> arr[i];

       for(int i=1;i<=n;i++){
           bool found = false;
           for(int j=0;j<n-1;j++){
               if(arr[j]==i){
                   found = true;
                   break;
               }
           }
           if(!found){
               cout << "The missing number is: " << i << endl;
               break;
           }
       }
        
    

}