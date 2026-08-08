// Question 2.3: Product Inventory Check
// Scenario: A warehouse has N products with their quantities in stock. A product is:
// "Critical" if quantity < 10
// "Low" if quantity is 10–49
// "Adequate" if quantity is 50–100
// "Excess" if quantity > 100
// Print the count of products in each category in order: Critical Low Adequate Excess.
// Input: First line: integer N. Second line: N space-separated integers (quantities).
// Output: 4 space-separated integers

// Input:  8
//         5 45 60 120 8 30 95 200
// Output: 2 2 2 2
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int quant[n];

    // Input marks of 5 subjects
    for (int i = 0; i < n; i++)
    {
        cin >> quant[i];
    }
    // "Critical" if quantity < 10
    // "Low" if quantity is 10–49
    // "Adequate" if quantity is 50–100
    // "Excess" if quantity > 100
    int Critical = 0, Low = 0, Adequate = 0, Excess = 0;
    for (int i = 0; i < n; i++)
    {
        if (quant[i] < 10)
        {
            Critical++;
        }
        else if (quant[i] >= 10 && quant[i] <= 49)
        {
            Low++;
        }
        else if (quant[i] >= 50 && quant[i] <= 100)
        {
            Adequate++;
        }
        else
        {
            Excess++;
        }
    }

    cout << Critical << Low << Adequate << Excess;
}