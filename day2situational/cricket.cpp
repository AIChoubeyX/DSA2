// Question 2.4: Cricket Run Rate Analysis
// Scenario: In a T20 cricket match, a team scores runs in each of the 20 overs. Calculate:
// Total runs
// Run rate (total runs / 20.0, rounded to 2 decimal places)
// Highest scoring over (max runs in a single over)
// How many overs had 0 runs (maiden overs)
// Input: First line: integer N (number of overs, max 20). Second line: N space-separated integers (runs per over).
// Output: 4 values: Total_Runs Run_Rate Highest_Scoring_Over Maiden_Overs_Count

// Input:  20
//         8 12 0 15 6 20 4 0 10 8 6 14 0 9 11 7 5 0 13 10
// Output: 168 8.40 20 4

#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>20 || n<=0)
    {
        cout<<"Invalid";
        return 0;
    }

    int runs[n];

    for(int i=0;i<n;i++)
    {
        cin>>runs[i];
    }

    int total_runs=0;

    for(int i=0;i<n;i++)
    {
        total_runs+=runs[i];
    }

    float Run_Rate=(float)total_runs/n;

    int maxi=runs[0];

    for(int i=1;i<n;i++)
    {
        maxi=max(maxi,runs[i]);
    }

    int maiden=0;

    for(int i=0;i<n;i++)
    {
        if(runs[i]==0)
        {
            maiden++;
        }
    }

    cout<<total_runs<<" ";
    cout<<fixed<<setprecision(2)<<Run_Rate<<" ";
    cout<<maxi<<" ";
    cout<<maiden;

    return 0;
}