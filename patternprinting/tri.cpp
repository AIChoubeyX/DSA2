// # include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
    
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << '*'  << " ";
//             // 
//         }
//         cout << endl;
//     }

//     return 0;
// }

// # include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
    
//     for(int i = 1; i <= n; i++) {
//         for(int j = i; j >= 1; j--) {
//             cout << j << " ";
            
//         }
//         cout << endl;
//     }

//     return 0;
// }
    
// #include<iostream>
//  using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         char ch = 'a' + i - 1; // char ka value har row ke liye update hoga aur pehle hi definned hoga
//         for(int j = 1; j <= i; j++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
    

// # include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
    
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n-(i-1); j++) {
//             cout << '*'  << " ";
            
//         }
//         cout << endl;
//     }

//     return 0;
// }

// # include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
    
    
//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << j  << " ";
//             // 
//         }
//         cout << endl;
//     }

//     return 0;
// }


# include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << j  << " ";
            
        }
        cout << endl;
    }

    return 0;
}