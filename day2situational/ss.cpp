// Question 2.1: Student Scholarship Eligibility
// Scenario: A college gives scholarships based on marks in 5 subjects. A student is eligible if:
// No subject has marks below 40
// Average marks are ≥ 60
// At least 3 subjects have marks ≥ 70
// Given marks of 5 subjects, determine if the student gets a "Full Scholarship", "Half Scholarship", or "No Scholarship".
// Full Scholarship: All 3 conditions met
// Half Scholarship: Only first 2 conditions met (average ≥ 60, no subject < 40, but less than 3 subjects ≥ 70)
// No Scholarship: Otherwise
// Input: 5 space-separated integers (marks of 5 subjects)
// Output: "Full Scholarship" or "Half Scholarship" or "No Scholarship"

// Input:  75 80 65 70 60
// Output: Full Scholarship

// Input:  55 60 65 70 75
// Output: Half Scholarship

// Input:  35 80 90 85 70
// Output: No Scholarship

#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    // Input marks of 5 subjects
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // Calculate total marks
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    // Calculate average
    int avg = sum / 5;

    // ------------------ Condition 1 ------------------
    // No subject should have marks below 40
    bool conditionOne = true;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < 40)
        {
            conditionOne = false;
            break;      // No need to check further
        }
    }

    // ------------------ Condition 2 ------------------
    // Average should be at least 60
    bool conditionTwo = (avg >= 60);

    // ------------------ Condition 3 ------------------
    // Count subjects having marks >= 70
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] >= 70)
        {
            count++;
        }
    }

    bool conditionThree = (count >= 3);

    // ------------------ Final Decision ------------------

    if (conditionOne && conditionTwo && conditionThree)
    {
        cout << "Full Scholarship";
    }
    else if (conditionOne && conditionTwo)
    {
        cout << "Half Scholarship";
    }
    else
    {
        cout << "No Scholarship";
    }

    return 0;
}