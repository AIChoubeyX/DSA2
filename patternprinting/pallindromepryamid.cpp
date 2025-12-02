// palindrome pyramid pattern

# include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
     
    
    for(int i = 1; i <= n; i++) {
        // for spaces
        for(int j = 1; j <= n- i; j++) {  
            cout <<"  ";
        }
        // for increasing numbers left side
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // for decreasing numbers right side
        for (int j = i-1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    // return 0;
}