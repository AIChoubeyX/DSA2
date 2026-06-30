#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     int target;
    cout << "Enter target: ";
    cin >> target;

    // Sort the array
    sort(arr, arr + n);
    // Two pointers

    int left = 0, right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            found = true;
            
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }
}