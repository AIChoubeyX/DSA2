// find the missing number in an array of size n-1 containing numbers from 1 to n
#include <iostream> 
using namespace std;

int main(){
    int arr[5] = {1,4,3,5}; // size n-1, n=5
    int n = 5;
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }

    int missingno = total - sum;
    cout << "The missing number is: " << missingno << endl;

    return 0;
}