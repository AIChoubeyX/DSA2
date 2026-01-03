// // 4 inputs can form a rectangle or not
// #include <iostream>
// using namespace std;


// int main(){
//     int a, b, c, d;
//     cout << "Enter 4 sides: ";
//     cin >> a >> b >> c >> d;

//     if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)){
//         cout << "Yes, they can form a rectangle." << endl;
//     } else {
//         cout << "No, they cannot form a rectangle." << endl;
//     }

//     return 0;
// }


// 4 inputs can form a rectangle or not
#include <iostream>
using namespace std;

void rectangle(int a, int b, int c, int d){
    if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)){
        cout << "Yes, they can form a rectangle." << endl;
    } else {
        cout << "No, they cannot form a rectangle." << endl;
    }
}


int main(){
    int a, b, c, d;
    cout << "Enter 4 sides: ";
    cin >> a >> b >> c >> d;
    rectangle(a, b, c, d);


   
}