// // Count the total number of squares that can be visited by Bishop in one move
// #include <iostream>
// using namespace std;

// int main(){
//     int row, col;
//     cout << "Enter the position of Bishop (row and column): ";
//     cin >> row >> col;

//     int count = 0;

//     // Top-Left diagonal
//     count += min(row - 1, col - 1);
//     // Top-Right diagonal
//     count += min(row - 1, 8 - col);
//     // Bottom-Left diagonal
//     count += min(8 - row, col - 1);
//     // Bottom-Right diagonal
//     count += min(8 - row, 8 - col);

//     cout << "Total squares the Bishop can move to in one move: " << count << endl;

//     return 0;
// }


// Count the total number of squares that can be visited by Bishop in one move
#include <iostream>
using namespace std;

void countmove(int row, int col){
    int count = 0;

    // Top-Left diagonal
    count += min(row - 1, col - 1);
    // Top-Right diagonal
    count += min(row - 1, 8 - col);
    // Bottom-Left diagonal
    count += min(8 - row, col - 1);
    // Bottom-Right diagonal
    count += min(8 - row, 8 - col);

    cout << "Total squares the Bishop can move to in one move: " << count << endl;
}

int main(){
    int row, col;
    cout << "Enter the position of Bishop (row and column): ";
    cin >> row >> col;

    countmove(row, col);
}