// Question 2.5: Bank Transaction Summary
// Scenario: A person's bank account starts with balance 0. A series of N transactions occur (positive = deposit, negative = withdrawal). After processing all transactions:
// If final balance is negative, print "Overdraft" and the absolute value of the negative balance.
// If final balance is 0, print "Zero Balance".
// If final balance is positive, print "Credit" and the balance.
// Additionally, print the maximum balance reached during the entire sequence (can be 0).
// Input: First line: integer N. Second line: N space-separated integers (transactions).
// Output: Two values: Status Balance and Max_Balance_Reached

// Input:  6
//         1000 -500 -800 2000 -400 -1500
// Output: Overdraft 200
//         1200
// Explanation: 1000-500-800+2000-400-1500 = -200. Max balance was 1200 (after 4th transaction: 1000-500-800+2000 = 1700... wait let me recalculate.
// 1000 - 500 = 500
// 500 - 800 = -300
// -300 + 2000 = 1700 ← Max
// 1700 - 400 = 1300
// 1300 - 1500 = -200
// So Max = 1700, Final = -200 → Overdraft 200


#include <iostream>
#include <cmath>   // for abs()
using namespace std;

int main()
{
    int n;
    cin >> n;

    int transactions[n];

    // Read all transactions
    for (int i = 0; i < n; i++)
    {
        cin >> transactions[i];
    }

    // Initial balance is 0
    int balance = 0;

    // Initially the maximum balance is also 0
    int maxBalance = 0;

    // Process every transaction
    for (int i = 0; i < n; i++)
    {
        // Update current balance
        balance += transactions[i];

        // If current balance is greater than previous maximum,
        // update maximum balance
        if (balance > maxBalance)
        {
            maxBalance = balance;
        }
    }

    // Print account status
    if (balance < 0)
    {
        cout << "Overdraft " << abs(balance) << endl;
    }
    else if (balance == 0)
    {
        cout << "Zero Balance" << endl;
    }
    else
    {
        cout << "Credit " << balance << endl;
    }

    // Print maximum balance reached
    cout << maxBalance;

    return 0;
}