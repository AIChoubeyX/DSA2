#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int original=n;

    int rev=0;

    while(n>0)
    {
        int digit=n%10;    
        rev=rev*10+digit;
        n=n/10;
    }

    if(original==rev)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}

// digit=n%10;  count last digit
// rev=rev*10+digit;  add last digit to rev
// n=n/10;  remove last digit from n