// Question 1.2: Courier Shipping Cost
// Scenario: A logistics company charges for parcel delivery based on weight:
// Up to 1 kg: ₹50
// 1–5 kg: ₹50 + ₹30 per kg above 1 kg
// 5–10 kg: ₹170 + ₹20 per kg above 5 kg
// Above 10 kg: ₹270 + ₹15 per kg above 10 kg
// If weight is negative, print "Invalid".
// Input: A single float W (weight in kg)
// Output: Total shipping cost (integer) or "Invalid"

// Input:  7
// Output: 210
// Explanation: 170 + (7-5)*20 = 170 + 40 = 210

// Input:  12.5
// Output: 307
// Explanation: 270 + (12.5-10)*15 = 270 + 37.5 = 307.5 → 307 (floor)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float wt;
    cin >> wt;

    if (wt < 0)
    {
        cout << "Invalid";
        return 0;
    }

    float cost = 0;

    if (wt <= 1)
    {
        cost = 50;
    }
    // 1–5 kg: ₹50 + ₹30 per kg above 1 kg
    else if (wt <= 5)
    {
        cost = 50;
        cost += (wt - 1) * 30;
    }
    //  5–10 kg: ₹170 + ₹20 per kg above 5 kg
    else if (wt <= 10)
    {
        cost = 170;
        cost += (wt - 5) * 20;
    }
    // Above 10 kg: ₹270 + ₹15 per kg above 10 kg
    else
    {
        cost = 270;
        cost += (wt - 10) * 15;
    }

    cout << floor(cost);
}


// Whenever the statement says:

// "...₹30 per kg above 1 kg"

// Immediately translate it in your head to:

// (weight - 1)

// If it says:

// "...above 5 kg"

// Write:

// (weight - 5)

// If it says:

// "...above 10 kg"

// Write:

// (weight - 10)