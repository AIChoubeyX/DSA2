// Question 2.2: Temperature Alert System
// Scenario: A weather monitoring system records hourly temperatures for a day (24 values). Generate an alert report:
// Count how many hours had temperature > 40°C ("Extreme")
// Count how many hours had temperature between 35°C and 40°C ("High")
// Count how many hours had temperature between 25°C and 35°C ("Moderate")
// Count how many hours had temperature < 25°C ("Low")
// Input: 24 space-separated integers (temperatures in °C)
// Output: 4 space-separated integers: Extreme High Moderate Low

// Input:  22 25 30 38 42 45 39 28 24 35 41 37 33 29 26 44 48 31 27 23 36 40 34 32
// Output: 4 5 10 5


#include <iostream>
using namespace std;

int main()
{
    // Array to store temperature of 24 hours
    int temp[24];

    // Read 24 temperature values
    for (int i = 0; i < 24; i++)
    {
        cin >> temp[i];
    }

    // Counters for each category
    int extreme = 0;
    int high = 0;
    int moderate = 0;
    int low = 0;

    // Traverse the entire array
    for (int i = 0; i < 24; i++)
    {
        // Greater than 40°C
        if (temp[i] > 40)
        {
            extreme++;
        }

        // Between 35°C and 40°C (both inclusive)
        else if (temp[i] >= 35 && temp[i] <= 40)
        {
            high++;
        }

        // Between 25°C and 34°C
        // (35 is already counted in High)
        else if (temp[i] >= 25 && temp[i] < 35)
        {
            moderate++;
        }

        // Less than 25°C
        else
        {
            low++;
        }
    }

    // Print the final counts
    cout << extreme << " "
         << high << " "
         << moderate << " "
         << low;

    return 0;
}