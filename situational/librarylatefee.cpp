// Question 1.3: Library Late Fee
// Scenario: A college library charges late return fees for books:
// 1–5 days late: ₹2 per day
// 6–10 days late: ₹10 + ₹4 per day above 5
// 11–20 days late: ₹30 + ₹5 per day above 10
// More than 20 days: Membership cancelled, print "Cancelled"
// If returned on time (0 days) or early, print "No Fee".
// Input: A single integer D (days late, can be negative or zero)
// Output: Fee amount or "No Fee" or "Cancelled"

// Input:  8
// Output: 22
// Explanation: 10 + (8-5)*4 = 10 + 12 = 22

// Input:  -2
// Output: No Fee

// Input:  25
// Output: Cancelled

#include<iostream>
using namespace std;

int main(){
    int days;
    cin >> days;

    if(days <= 0){
        cout << "no fee";
        return 0;
    }
   int latefee = 0;
    // 1–5 days late: ₹2 per day
    if(days <= 5){
        latefee = days * 2;
    }
    // 6–10 days late: ₹10 + ₹4 per day above 5
    else if(days <= 10){
        latefee = 10;
        latefee = 10 + (days - 5)*4;
    }
    // 11–20 days late: ₹30 + ₹5 per day above 10
    else if(days <= 20){
        latefee = 30 + (days-10)*5;
    }
    // More than 20 days: Membership cancelled, print "Cancelled"
    else {
        cout << "membership cancelled";
        return 0;
    }

    cout << latefee;
    



}