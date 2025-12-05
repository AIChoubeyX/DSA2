// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     int i=1;
//     while(i = n){
//         cout << i << " ";
//         i = i * 2;
//         cout << endl;
//    }
//     return 0;
// }

// do while loop
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    do
    {
        cout << n * i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
    return 0;
}