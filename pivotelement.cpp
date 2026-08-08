// #include<iostream>
// using namespace std;

// int main (){
//     int n;
//     cin >> n;

//     int arr[n];
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     int cs=0; //cumulative sum

//     for(int i=0;i<n;i++){
//         int ls = cs; //left sum
//         int rs = sum - cs - arr[i]; //right sum
//         if(ls == rs){
//             return i;
//         }
//         cs = cs + arr[i];
//     }
//     return -1;
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            cout << i;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << -1;

    return 0;
}