// # include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter the number of rows: ";
//     cin >> n;

//     for (int i = n ; i>=1 ; i--) {
//         for( int j =1 ; j <= n - i ; j++) {
//             cout << "  ";
//         }
//         for ( int j =1 ; j <= i ; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

// }

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // print leading spaces
        for(int s = 1; s <= n - i; s++) {
            cout << "  "; // 2 spaces
        }

        // print decreasing numbers from 5
        for(int j = 5; j >= 6 - i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
