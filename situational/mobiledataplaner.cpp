// Question 1.4: Mobile Data Plan Recommender
// Scenario: A telecom company offers these data plans:
// Plan A (1 GB/day for 28 days): ₹199
// Plan B (1.5 GB/day for 28 days): ₹249
// Plan C (2 GB/day for 28 days): ₹299
// Plan D (3 GB/day for 28 days): ₹399
// Given a user's daily average data usage in MB, recommend the cheapest sufficient plan. If usage exceeds 3 GB/day, print "No Plan Available". (1 GB = 1024 MB)
// Input: A single integer U (daily usage in MB)
// Output: Plan name (A/B/C/D) or "No Plan Available"

// Input:  900
// Output: A
// Explanation: 900 MB < 1024 MB (1 GB), so Plan A suffices.

// Input:  1500
// Output: B
// Explanation: 1500 MB > 1024 MB but < 1536 MB, so Plan B.

// Input:  4000
// Output: No Plan Available

#include<iostream>
using namespace std;

int main(){

    int u;
    cin>>u;

    if(u<0){
        cout<<"Invalid";
        return 0;
    }

    if(u<=1024){
        cout<<"Plan A";
    }
    else if(u<=1536){
        cout<<"Plan B";
    }
    else if(u<=2048){
        cout<<"Plan C";
    }
    else if(u<=3072){
        cout<<"Plan D";
    }
    else{
        cout<<"No Plan Available";
    }

    return 0;
}