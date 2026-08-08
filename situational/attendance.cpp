// Question 4.2: Attendance Reward System
// Scenario: A school tracks attendance for N students over 30 days. Each student’s record is a string of 30 characters (P = Present, A = Absent, L = Late). A student gets: - "Full Attendance Award" if present on all 30 days (no A, no L) - "Regular Award" if absent on ≤ 2 days AND late on ≤ 3 days - "No Award" otherwise
// Input: First line: integer N. Next N lines: each containing a 30-character string.
// Output: N lines, each containing the award status for that student
// Example:
// Input:  3
//         PPPPPPPPPPPPPPPPPPPPPPPPPPPPPP
//         PPPAPPPPPPPPPPPPPPPPPPPPPPPPPP
//         PPPPPPPPPPPPPPPPPPPPPPPPPPPPLL
// Output: Full Attendance Award
//         Regular Award
//         Full Attendance Award
#include <iostream>
#include <string>
using namespace std;  

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline after the integer input

    for (int i = 0; i < N; ++i) {
        string record;
        getline(cin, record);

        int absentCount = 0;
        int lateCount = 0;

        for (char c : record) {
            if (c == 'A') {
                absentCount++;
            } else if (c == 'L') {
                lateCount++;
            }
        }

        if (absentCount == 0 && lateCount == 0) {
            cout << "Full Attendance Award" << endl;
        } else if (absentCount <= 2 && lateCount <= 3) {
            cout << "Regular Award" << endl;
        } else {
            cout << "No Award" << endl;
        }
    }

    return 0;
}