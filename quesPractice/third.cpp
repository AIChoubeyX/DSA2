// Trailing zeroes in factorial
#include <iostream>
using namespace std;


void countfives(int n){
    int count = 0;
    while(n >= 5){
        count += n / 5;
        n /= 5;
    }
    cout << "Number of trailing zeroes in factorial: " << count << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    countfives(n);
}