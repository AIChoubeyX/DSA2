// Question 4.1: Discounted Shopping Bill
// Scenario: A customer buys N items. Each item has a price. The store offers: - If total bill < ₹1000: No discount - If total bill ₹1000–₹5000: 10% discount - If total bill > ₹5000: 20% discount
// Additionally, if the customer has a membership card ('Y' or 'y'), they get an extra 5% discount on the already discounted amount. Calculate the final payable amount (round down to integer).
// Input: First line: integer N. Second line: N space-separated integers (prices). Third line: character M (membership: Y/N).
// Output: Final payable amount
// Example:
// Input:  5
//         1200 800 1500 2000 500
//         Y
// Output: 4560
// Explanation: Total = 6000. Discount = 20% → 4800. Membership = 5% of 4800 = 240. Final = 4560.

// Input:  3
//         100 200 300
//         N
// Output: 600


#include <iostream>
#include <cmath>    // for floor()
using namespace std;

int main()
{
    // Number of items
    int n;
    cin >> n;

    // Array to store prices
    int price[n];

    // Read the prices
    for(int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    // Membership status
    char m;
    cin >> m;

    // ---------------- Step 1: Calculate Total Bill ----------------
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total += price[i];
    }

    // Final amount should be float because discounts may produce decimals
    float finalAmount = total;

    // ---------------- Step 2: Apply Bill Discount ----------------

    // No discount if total < 1000
    if(total < 1000)
    {
        finalAmount = total;
    }

    // 10% discount
    else if(total <= 5000)
    {
        finalAmount = total - (total * 0.10);
    }

    // 20% discount
    else
    {
        finalAmount = total - (total * 0.20);
    }

    // ---------------- Step 3: Membership Discount ----------------

    // Apply extra 5% on the already discounted amount
    if(m == 'Y' || m == 'y')
    {
        finalAmount = finalAmount - (finalAmount * 0.05);
    }

    // ---------------- Step 4: Print Final Amount ----------------

    // floor() removes decimal part
    cout << floor(finalAmount);

    return 0;
}