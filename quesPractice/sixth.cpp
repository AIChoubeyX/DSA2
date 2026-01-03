// nim game problem
#include <iostream>
using namespace std;

bool canWinNim(int n) {
    return n % 4 != 0;
    
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;

    if (canWinNim(n)) {
        cout << "You can win the Nim game!" << endl;
    } else {
        cout << "You cannot win the Nim game." << endl;
    }

    return 0;
}