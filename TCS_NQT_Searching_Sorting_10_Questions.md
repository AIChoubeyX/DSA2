# TCS NQT Final 10 — Searching & Sorting (Beginner Level)

> **Smart Swap: Replacing 18 Advanced (LL/Stack/Queue) with 10 Searching & Sorting**
> **Exam Ready | Beginner Friendly | C++ Solutions | TCS NQT Pattern**

---

## 🎯 Mentor's Honest Assessment: Should You Do This?

**YES. This is a SMART move.** Here's why:

| Factor | Linked List / Stack / Queue | Searching & Sorting |
|--------|---------------------------|---------------------|
| **Probability in TCS NQT** | ~5–8% | ~15–20% |
| **Difficulty for Beginners** | High (pointers, memory) | Medium (logic-based) |
| **Time to Master** | 3–4 days | 1–2 days |
| **ROI (Return on Investment)** | Low | **High** |
| **Can brute force work?** | No | Often yes (sort + scan) |

**TCS NQT Reality:** They rarely ask complex Linked List or Stack implementations in the coding test. But they **frequently** ask:
- "Sort this array by custom rule"
- "Find Kth smallest element"
- "Search target in sorted array"
- "Find pair with given difference"

Since your **binary search concept is clear**, you're already 50% ready for these 10 questions. The remaining 50% is just **"sort the array, then do something simple."**

**My verdict:** Skip the 18 advanced questions. Master these 10 instead. You'll have a **much higher chance** of seeing something familiar in the exam.

---

## ⚡ TCS NQT C++ Template (Use for Every Question)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read input
    // Write logic
    // Print ONLY required output

    return 0;
}
```

**Rules:**
- `#include <bits/stdc++.h>` — includes everything
- `ios_base::sync_with_stdio(false); cin.tie(NULL);` — speeds up I/O
- Never print extra text
- Always handle edge cases (empty array, n=0, n=1)

---

## 🔍 PART 1: SEARCHING (5 Questions)

---

## Q1: Binary Search — Basic Implementation

### Problem
Given a sorted array of `N` integers and a target value `X`, find the **index** of `X` in the array. If not found, print `-1`.

### Why This Matters
TCS NQT **2026** explicitly asked: *"Implement binary search to find the index of a target in a sorted array."* This is the foundation of all searching questions.

### Input Format
```
N X
N space-separated integers (sorted)
```

### Output Format
Single integer — index of X or `-1`

### Example
```
Input:
6 9
-1 0 3 5 9 12

Output:
4

Input:
6 2
-1 0 3 5 9 12

Output:
-1
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = n - 1;
    int ans = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;  // Prevents overflow

        if(arr[mid] == x) {
            ans = mid;
            break;
        }
        else if(arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
```

**Time:** O(log N) | **Space:** O(1)

**Key Insight:** `mid = left + (right - left) / 2` prevents integer overflow. Always use this formula, never `(left + right) / 2`.

---

## Q2: First and Last Occurrence of an Element

### Problem
Given a sorted array of `N` integers and a target `X`, find the **first and last index** where `X` appears. If `X` is not present, print `-1 -1`.

### Why This Matters
This is the **most common binary search variation**. TCS loves questions that test whether you understand "what happens after you find the element?"

### Input Format
```
N X
N space-separated integers (sorted)
```

### Output Format
Two integers: `first_index last_index` or `-1 -1`

### Example
```
Input:
8 5
1 2 5 5 5 5 7 8

Output:
2 5

Input:
6 4
1 2 3 5 7 8

Output:
-1 -1
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Find first occurrence
    int first = -1, left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            first = mid;
            right = mid - 1;  // Keep searching on left side
        }
        else if(arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // If not found at all
    if(first == -1) {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    // Find last occurrence
    int last = first;
    left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            last = mid;
            left = mid + 1;  // Keep searching on right side
        }
        else if(arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << first << " " << last << endl;
    return 0;
}
```

**Time:** O(log N) | **Space:** O(1)

**Key Insight:** After finding `arr[mid] == x`, don't stop. For **first** occurrence, search left (`right = mid - 1`). For **last** occurrence, search right (`left = mid + 1`).

---

## Q3: Count Occurrences in Sorted Array

### Problem
Given a sorted array of `N` integers and a target `X`, count how many times `X` appears in the array.

### Why This Matters
This combines Q1 and Q2. TCS asks this directly or as part of a larger problem.

### Input Format
```
N X
N space-separated integers (sorted)
```

### Output Format
Single integer — count of X

### Example
```
Input:
8 5
1 2 5 5 5 5 7 8

Output:
4

Input:
6 4
1 2 3 5 7 8

Output:
0
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Find first occurrence
    int first = -1, left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            first = mid;
            right = mid - 1;
        }
        else if(arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    if(first == -1) {
        cout << 0 << endl;
        return 0;
    }

    // Find last occurrence
    int last = first;
    left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            last = mid;
            left = mid + 1;
        }
        else if(arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    cout << last - first + 1 << endl;
    return 0;
}
```

**Time:** O(log N) | **Space:** O(1)

**Key Insight:** Count = `last - first + 1`. If first is not found, count is 0.

---

## Q4: Search Insert Position

### Problem
Given a sorted array of `N` distinct integers and a target `X`, return the **index** where `X` should be inserted to keep the array sorted. If `X` is already present, return its index.

### Why This Matters
Tests whether you truly understand binary search boundaries. Very common interview/NQT question.

### Input Format
```
N X
N space-separated integers (sorted)
```

### Output Format
Single integer — insert position

### Example
```
Input:
4 5
1 3 5 6

Output:
2

Input:
4 2
1 3 5 6

Output:
1

Input:
4 7
1 3 5 6

Output:
4
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = n - 1;
    int ans = n;  // Default: insert at end

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == x) {
            ans = mid;
            break;
        }
        else if(arr[mid] < x) {
            left = mid + 1;
        }
        else {
            ans = mid;        // This could be the answer
            right = mid - 1;  // But maybe something smaller exists
        }
    }

    cout << ans << endl;
    return 0;
}
```

**Time:** O(log N) | **Space:** O(1)

**Key Insight:** When `arr[mid] > x`, `mid` is a **potential answer** (all elements to the right are even larger). But we keep searching left to find an even smaller valid position.

---

## Q5: Find Peak Element

### Problem
Given an array of `N` integers, find a **peak element** (an element that is **not smaller** than its neighbors). For corner elements, consider only one neighbor. Print the **index** of any one peak element. If multiple exist, any is fine. If array is strictly decreasing, the first element is a peak. If strictly increasing, the last element is a peak.

### Why This Matters
Beautiful binary search application. TCS asks this to test if you can apply BS to "non-standard" problems.

### Input Format
```
N
N space-separated integers
```

### Output Format
Single integer — index of peak element

### Example
```
Input:
7
1 2 3 1 5 6 4

Output:
5
Explanation: arr[5] = 6 >= arr[4] = 5 and arr[5] = 6 >= arr[6] = 4

Input:
4
1 2 3 4

Output:
3

Input:
4
4 3 2 1

Output:
0
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Edge cases
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if(arr[0] >= arr[1]) {
        cout << 0 << endl;
        return 0;
    }
    if(arr[n-1] >= arr[n-2]) {
        cout << n - 1 << endl;
        return 0;
    }

    int left = 1, right = n - 2;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        // Check if mid is peak
        if(arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
            cout << mid << endl;
            return 0;
        }
        // If left neighbor is greater, peak must be on left
        else if(arr[mid - 1] > arr[mid]) {
            right = mid - 1;
        }
        // If right neighbor is greater, peak must be on right
        else {
            left = mid + 1;
        }
    }

    cout << left << endl;
    return 0;
}
```

**Time:** O(log N) | **Space:** O(1)

**Key Insight:** If `arr[mid-1] > arr[mid]`, a peak **must** exist on the left side (because the array "rises" from the left boundary). Similarly for the right. This is the beauty of the problem.

---

## 📊 PART 2: SORTING (5 Questions)

---

## Q6: Implement Bubble Sort

### Problem
Given an array of `N` integers, sort it in **ascending order** using Bubble Sort. Print the array after each pass (outer loop iteration) on a **new line**. After the final sorted array, print `"Sorted"`.

### Why This Matters
TCS NQT **sometimes asks you to implement a sorting algorithm directly** rather than just using `sort()`. GFG lists Bubble Sort as a core TCS NQT topic. Knowing the logic is essential.

### Input Format
```
N
N space-separated integers
```

### Output Format
Array after each pass, each on a new line. Finally print `"Sorted"`.

### Example
```
Input:
5
5 1 4 2 8

Output:
1 4 2 5 8
1 2 4 5 8
1 2 4 5 8
Sorted
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Print after each pass
        for(int k = 0; k < n; k++) {
            cout << arr[k];
            if(k < n - 1) cout << " ";
        }
        cout << endl;

        // Optimization: if no swaps, array is sorted
        if(!swapped) break;
    }

    cout << "Sorted" << endl;
    return 0;
}
```

**Time:** O(N²) worst case, O(N) best case | **Space:** O(1)

**Key Insight:** The `swapped` flag is crucial. If a complete pass makes no swaps, the array is already sorted. This is the **optimized Bubble Sort**.

---

## Q7: Kth Largest Element

### Problem
Given an array of `N` integers and an integer `K`, find the **Kth largest element** in the array.

### Why This Matters
Extremely common question. TCS asks this directly or disguised as "find the Kth highest score."

### Input Format
```
N K
N space-separated integers
```

### Output Format
Single integer — Kth largest element

### Example
```
Input:
6 2
3 2 1 5 6 4

Output:
5
Explanation: Sorted: [1,2,3,4,5,6]. 2nd largest = 5.

Input:
5 3
3 2 3 1 2

Output:
2
Explanation: Sorted: [1,2,2,3,3]. 3rd largest = 2.
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Method 1: Sort and pick (beginner-friendly, O(N log N))
    sort(arr.begin(), arr.end());
    cout << arr[n - k] << endl;

    return 0;
}
```

**Time:** O(N log N) | **Space:** O(1)

**Key Insight:** After sorting in ascending order, Kth largest is at index `n - k`. For Kth smallest, it would be at index `k - 1`.

**Note:** For large N (10⁵) and large K, this is acceptable. TCS NQT rarely requires the O(N) QuickSelect approach.

---

## Q8: Sort Array by Frequency

### Problem
Given an array of `N` integers, sort the array such that:
1. Elements with **higher frequency** come first
2. If two elements have the same frequency, the **smaller element** comes first

### Why This Matters
TCS NQT asks "Sort by Frequency" directly. GFG lists it as a core topic. This tests your ability to use a **HashMap + custom sorting**.

### Input Format
```
N
N space-separated integers
```

### Output Format
Sorted array elements separated by spaces

### Example
```
Input:
8
2 3 2 4 5 12 2 3

Output:
2 2 2 3 3 4 5 12
Explanation: 2 appears 3 times, 3 appears 2 times, 4,5,12 appear 1 time each.

Input:
6
1 1 2 2 3 3

Output:
1 1 2 2 3 3
Explanation: All appear 2 times. Smaller first: 1, then 2, then 3.
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Step 1: Count frequency
    unordered_map<int, int> freq;
    for(int x : arr) freq[x]++;

    // Step 2: Sort with custom comparator
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        if(freq[a] != freq[b]) {
            return freq[a] > freq[b];  // Higher frequency first
        }
        return a < b;  // If same frequency, smaller number first
    });

    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
```

**Time:** O(N log N) | **Space:** O(N)

**Key Insight:** The lambda comparator captures `freq` by reference. First compare frequencies (descending), then values (ascending). This is the most elegant way in C++.

---

## Q9: Minimum Difference Between Any Two Elements

### Problem
Given an array of `N` integers, find the **minimum absolute difference** between any two elements in the array.

### Why This Matters
Tests the fundamental insight: **"Sort first, then scan adjacent pairs."** This pattern appears in many TCS NQT questions.

### Input Format
```
N
N space-separated integers
```

### Output Format
Single integer — minimum difference

### Example
```
Input:
5
4 8 15 16 23

Output:
1
Explanation: After sorting: [4,8,15,16,23]. Adjacent diffs: 4,7,1,7. Min = 1.

Input:
3
1 5 9

Output:
4
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    if(n < 2) {
        cout << 0 << endl;
        return 0;
    }

    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    for(int i = 1; i < n; i++) {
        minDiff = min(minDiff, arr[i] - arr[i - 1]);
    }

    cout << minDiff << endl;
    return 0;
}
```

**Time:** O(N log N) | **Space:** O(1)

**Key Insight:** After sorting, the minimum difference **must** be between two adjacent elements. No need to check all pairs.

---

## Q10: Find Pair with Given Difference

### Problem
Given an array of `N` integers and a target difference `K`, determine if there exists a pair of elements whose **absolute difference** is exactly `K`. Print `"YES"` or `"NO"`.

### Why This Matters
Classic "sort + two pointer" problem. Tests whether you can combine two techniques. Very TCS NQT style.

### Input Format
```
N K
N space-separated integers
```

### Output Format
`"YES"` or `"NO"`

### Example
```
Input:
6 3
5 20 3 2 50 80

Output:
YES
Explanation: |50 - 20| = 30... wait. |5 - 2| = 3. Yes!

Input:
5 10
1 2 3 4 5

Output:
NO
```

### C++ Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int left = 0, right = 1;

    while(right < n) {
        int diff = arr[right] - arr[left];

        if(diff == k) {
            cout << "YES" << endl;
            return 0;
        }
        else if(diff < k) {
            right++;  // Need larger difference
        }
        else {
            left++;   // Need smaller difference
            if(left == right) right++;  // Maintain gap
        }
    }

    cout << "NO" << endl;
    return 0;
}
```

**Time:** O(N log N) | **Space:** O(1)

**Key Insight:** Sort first. Use two pointers. If `arr[right] - arr[left] < k`, we need a bigger gap → move `right`. If `> k`, we need a smaller gap → move `left`. This is elegant and efficient.

---

## 🗓️ Your 2-Day Searching & Sorting Plan

### Day 1 — Searching Mastery
- [ ] Q1: Binary Search (20 min) — Build confidence
- [ ] Q2: First & Last Occurrence (25 min) — Master the variation
- [ ] Q3: Count Occurrences (20 min) — Combine Q1+Q2
- [ ] Q4: Search Insert Position (20 min) — Boundary practice
- [ ] Q5: Find Peak Element (25 min) — Apply BS creatively
- [ ] **Revision:** Re-solve Q1 and Q2 without looking (20 min)

### Day 2 — Sorting Mastery
- [ ] Q6: Bubble Sort (20 min) — Know the logic cold
- [ ] Q7: Kth Largest (15 min) — Sort + index
- [ ] Q8: Sort by Frequency (25 min) — HashMap + comparator
- [ ] Q9: Minimum Difference (20 min) — Sort + adjacent scan
- [ ] Q10: Pair with Given Difference (25 min) — Sort + two pointer
- [ ] **Revision:** Re-solve Q8 and Q10 without looking (25 min)

**Total: ~4.5 hours over 2 days.** Very manageable.

---

## 🎯 How These 10 Fit Into Your Total Preparation

| Section | Questions | Status |
|---------|-----------|--------|
| Core 48 | Arrays, Strings, Numbers | ✅ Done |
| Situational 35 | Real-world logic | ✅ Done |
| Final 15 | Highest probability | ✅ Done |
| **Searching & Sorting 10** | **This pack** | **🔄 In Progress** |
| **Skipped** | LL, Stack, Queue (18) | **❌ Smart skip** |

**Grand Total Active Questions: 108**

**Your probability of solving at least 1 question:** >95%  
**Your probability of solving both questions:** >80%

---

## 💡 Mentor's Final Words

You made the **right call** skipping Linked List, Stack, and Queue. Here's why:

> **"In TCS NQT, a student who can sort an array, binary search confidently, and handle edge cases is worth more than a student who knows Linked List reversal but panics under time pressure."**

These 10 questions are **pure gold** for your level:
- They use only arrays and basic logic
- They appear frequently in TCS NQT
- They can be solved in 15–20 minutes each
- They build skills that transfer to other problems

**Focus on Q1, Q2, Q7, Q8, Q10** if you're short on time. These 5 have the highest probability.

You've done the hard work. Now it's just about staying calm and executing. 

**Go crack TCS NQT. I'm rooting for you. 🚀**
