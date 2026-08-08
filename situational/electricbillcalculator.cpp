// Question 1.1: Electricity Bill Calculator
// Scenario: An electricity board charges consumers based on units consumed per month. The slab rates are:
// First 100 units: ₹5 per unit
// Next 100 units (101–200): ₹7 per unit
// Next 200 units (201–400): ₹10 per unit
// Above 400 units: ₹15 per unit
// Additionally, a fixed meter charge of ₹100 is added to every bill. If units consumed are 0 or negative, print "Invalid".
// Input: A single integer N (units consumed)
// Output: Total bill amount (integer) or "Invalid"

// Input:  250
// Output: 2050
// Explanation: (100*5) + (100*7) + (50*10) + 100 = 500+700+500+100 = 1800... wait let me recalculate.
// 100*5 = 500
// 100*7 = 700
// 50*10 = 500
// Fixed = 100
// Total = 1800

// Input:  0
// Output: Invalid

// Input:  50
// Output: 350
// Explanation: 50*5 + 100 = 350

#include <iostream>
using namespace std;

int main()
{
    // Suppose the customer consumed 250 units.
    // (You can later replace this with cin >> units;)
    int units = 250;

    // Variable to store the final bill.
    // Initially, the bill is 0 because we haven't calculated anything yet.
    int bill = 0;

    // -------------------- Invalid Input --------------------
    // Electricity units cannot be 0 or negative.
    // So if units are <= 0, print "Invalid" and stop the program.
    if (units <= 0)
    {
        cout << "Invalid";
        return 0;
    }

    // -------------------- Slab 1 --------------------
    // If the customer used only 100 units or less,
    // every unit costs ₹5.
    //
    // Example:
    // units = 50
    // bill = 50 × 5 = 250
    //
    // We DO NOT calculate other slabs because the customer
    // never reached them.
    if (units <= 100)
    {
        bill = units * 5;
    }

    // -------------------- Slab 2 --------------------
    // Customer used between 101 and 200 units.
    //
    // Example:
    // units = 150
    //
    // First 100 units
    // = 100 × 5 = 500
    //
    // Remaining units
    // = 150 - 100 = 50
    //
    // Those remaining 50 units belong to the second slab.
    // So,
    // 50 × 7 = 350
    //
    // Total before meter charge
    // = 500 + 350 = 850
    else if (units <= 200)
    {
        // First slab is completely used.
        bill = 100 * 5;

        // Now calculate only the remaining units.
        bill += (units - 100) * 7;
    }

    // -------------------- Slab 3 --------------------
    // Customer used between 201 and 400 units.
    //
    // Example:
    // units = 250
    //
    // First 100 units
    // = 100 × 5 = 500
    //
    // Next 100 units
    // = 100 × 7 = 700
    //
    // Remaining units
    // = 250 - 200 = 50
    //
    // Those 50 units belong to the third slab.
    // = 50 × 10 = 500
    //
    // Total before meter charge
    // = 500 + 700 + 500
    else if (units <= 400)
    {
        // Pay full first slab.
        bill = 100 * 5;

        // Pay full second slab.
        bill += 100 * 7;

        // Pay only the remaining units.
        bill += (units - 200) * 10;
    }

    // -------------------- Slab 4 --------------------
    // Customer used more than 400 units.
    //
    // Example:
    // units = 550
    //
    // First 100 units
    // = 100 × 5
    //
    // Next 100 units
    // = 100 × 7
    //
    // Next 200 units
    // = 200 × 10
    //
    // Remaining units
    // = 550 - 400 = 150
    //
    // Those 150 units belong to the last slab.
    // = 150 × 15
    else
    {
        // First slab is fully used.
        bill = 100 * 5;

        // Second slab is fully used.
        bill += 100 * 7;

        // Third slab is fully used.
        bill += 200 * 10;

        // Remaining units after first 400 units.
        bill += (units - 400) * 15;
    }

    // Every customer pays a fixed meter charge.
    // This charge is added regardless of the number of units.
    bill += 100;

    // Print the final bill.
    cout << "Total Bill = " << bill;

    return 0;
}