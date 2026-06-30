#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int j = -1;

    // Find first zero
    for(int i=0;i<n;i++) {

        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    // No zero found
    if(j == -1) {
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        return 0;
    }

    for(int i=j+1;i<n;i++) {

        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}