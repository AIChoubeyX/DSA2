// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << "i " << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = n; j >= 1; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j*j << " ";
        }
        cout << endl;
    }

    return 0;
}