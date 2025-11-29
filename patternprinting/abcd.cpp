// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         char ch = 'a' + i - 1; // char ka value har row ke liye update hoga aur pehle hi definned hoga
//         for(int j = 1; j <= n; j++) {
//             cout << ch << " ";
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
            char ch = 'a' + j - 1; // char ka value andar loop me update hoga 
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}