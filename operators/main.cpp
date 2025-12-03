# include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = a++;
    cout << "Value of a: " << a << endl;
    a++;
    cout << b << endl;
    cout << "Value of a after a++: " << a << endl;
}