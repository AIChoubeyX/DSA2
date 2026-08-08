# TCS NQT Exam-Day STL Cheat Sheet & Last-Minute Guide

> **Exam Date: 9 August 2026 | Language: C++ | Target: Solve at least 1/2 coding questions**

---

## 🚨 LAST-DAY GOLDEN RULES

1. **DO NOT learn anything new today.** Only revise what you already know.
2. **Sleep 7+ hours.** Your brain needs rest to recall under pressure.
3. **Solve 3–5 questions you already know** to build confidence, not to learn.
4. **Reach the exam center 30 minutes early.** Calm mind = better logic.
5. **Read the problem statement TWICE.** Underline numbers and conditions.
6. **Write pseudocode as comments first.** 2 minutes of planning saves 15 minutes of debugging.
7. **Test with given example manually** before submitting.
8. **If stuck on Q1 for >20 minutes, jump to Q2.** Come back later.
9. **Even brute force gets partial marks.** Never leave a question blank.
10. **You've prepared 108+ questions. You ARE ready.** Trust your preparation.

---

## 📦 PART 1: STL Containers Cheat Sheet

### 1.1 vector — Your Best Friend (Use for ALL arrays)

```cpp
#include <bits/stdc++.h>
using namespace std;

// Declaration
vector<int> v;                    // Empty
vector<int> v(n);                 // Size n, all zeros
vector<int> v(n, val);            // Size n, all = val
vector<int> v = {1, 2, 3};        // Initialize with values

// Input
int n; cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) cin >> v[i];

// Essential Operations
v.push_back(x);       // Add at end
v.pop_back();         // Remove last
v.size();             // Number of elements
v.empty();            // true if empty
v.clear();            // Remove all
v.front();            // First element
v.back();             // Last element
v[i];                 // Access i-th element (0-based)

// 2D Vector (Matrix)
vector<vector<int>> mat(n, vector<int>(m));
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        cin >> mat[i][j];
```

---

### 1.2 string — For All String Problems

```cpp
string s;             cin >> s;        // Single word
string s;             getline(cin, s); // Full line with spaces

// Essential Operations
s.length();           // or s.size()
s[i];                 // Access i-th character
s.substr(start, len); // Substring from start, length len
s.substr(start);      // Substring from start to end
s.find("abc");        // Returns index or string::npos
s.find('a');          // Find character
s.find("abc", pos);   // Find from position pos
s.replace(pos, len, "xyz"); // Replace substring
s.insert(pos, "xyz"); // Insert at position
s.erase(pos, len);    // Erase substring
s.erase(pos);         // Erase from pos to end
s.erase(s.begin() + i); // Erase i-th character
s.clear();            // Empty the string
s.empty();            // Check if empty
s + t;                // Concatenation

// Convert number to string and back
string s = to_string(123);     // "123"
int x = stoi("123");           // 123
long long x = stoll("123456"); // 123456

// Character checks
isalpha(c);   // Letter
isdigit(c);   // Digit
isupper(c);   // Uppercase
islower(c);   // Lowercase
isspace(c);   // Whitespace
toupper(c);   // Convert to uppercase
tolower(c);   // Convert to lowercase
```

---

### 1.3 unordered_map — For Frequency Counting (Fastest)

```cpp
unordered_map<int, int> freq;     // Key: int, Value: int
unordered_map<char, int> charFreq; // For string frequency

// Operations
freq[x]++;                        // Increment count of x
freq[x] = 0;                      // Set count
freq.count(x);                    // 1 if exists, 0 if not
freq.find(x) != freq.end();       // true if exists
freq.erase(x);                    // Remove key x
freq.size();                      // Number of unique keys

// Iterate
for(auto &p : freq) {
    cout << p.first << " -> " << p.second << endl;
}

// Check if frequency of any element is > n/2 (Majority)
for(auto &p : freq) {
    if(p.second > n/2) {
        cout << p.first << endl;
        break;
    }
}
```

**When to use:** Counting frequency, checking duplicates, finding unique elements.

---

### 1.4 map — Sorted Key-Value Pairs (Use when order matters)

```cpp
map<int, int> mp;        // Keys sorted in ascending order
map<int, int, greater<int>> mp; // Keys sorted in descending

// Same operations as unordered_map
// But iteration is always sorted by key

// Example: Print frequencies in sorted order of value
map<int, int> freq;
// ... fill freq ...
for(auto &p : freq) {
    cout << p.first << ": " << p.second << endl;
}
```

**When to use:** When you need keys in sorted order. Slightly slower than unordered_map.

---

### 1.5 set / unordered_set — For Unique Elements

```cpp
unordered_set<int> st;    // Fast, no order
set<int> st;              // Sorted, slightly slower

// Operations
st.insert(x);             // Add element
st.erase(x);              // Remove element
st.count(x);              // 1 if exists, 0 if not
st.find(x) != st.end();   // true if exists
st.size();                // Number of elements

// Example: Check if array is subset of another
unordered_set<int> s(arr2.begin(), arr2.end());
for(int x : arr1) {
    if(s.find(x) == s.end()) {
        cout << "No" << endl;
        return 0;
    }
}
```

**When to use:** Removing duplicates, checking existence, set operations.

---

### 1.6 stack — Basic LIFO (Rare but good to know)

```cpp
stack<int> st;
st.push(x);       // Add to top
st.pop();         // Remove top
st.top();         // View top element
st.empty();       // Check if empty
st.size();        // Number of elements

// Example: Balanced Parentheses
stack<char> st;
for(char c : s) {
    if(c == '(' || c == '{' || c == '[') st.push(c);
    else {
        if(st.empty()) { cout << "No" << endl; return 0; }
        char top = st.top(); st.pop();
        if((c == ')' && top != '(') || 
           (c == '}' && top != '{') || 
           (c == ']' && top != '[')) {
            cout << "No" << endl; return 0;
        }
    }
}
cout << (st.empty() ? "Yes" : "No") << endl;
```

---

### 1.7 queue — Basic FIFO (Rare but good to know)

```cpp
queue<int> q;
q.push(x);        // Add to back
q.pop();          // Remove front
q.front();        // View front element
q.back();         // View back element
q.empty();        // Check if empty
q.size();         // Number of elements
```

---

### 1.8 priority_queue — For Kth Largest/Smallest

```cpp
// Max-Heap (largest on top)
priority_queue<int> pq;

// Min-Heap (smallest on top)
priority_queue<int, vector<int>, greater<int>> pq;

// Operations
pq.push(x);       // Add element
pq.pop();         // Remove top
pq.top();         // View top element
pq.empty();       // Check if empty
pq.size();        // Number of elements

// Example: Kth Largest Element
priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
for(int x : arr) {
    pq.push(x);
    if(pq.size() > k) pq.pop(); // Keep only k largest
}
cout << pq.top() << endl; // Kth largest
```

**When to use:** Kth largest/smallest, merging sorted arrays, scheduling.

---

### 1.9 pair — For storing two values together

```cpp
pair<int, int> p = {1, 2};
cout << p.first << " " << p.second << endl;

// Vector of pairs
vector<pair<int, int>> vp;
vp.push_back({1, 2});
vp.push_back(make_pair(3, 4));

// Sort by first, then by second
sort(vp.begin(), vp.end()); // Default: sorts by first, then second

// Custom sort: sort by second element
sort(vp.begin(), vp.end(), [](pair<int,int> &a, pair<int,int> &b) {
    return a.second < b.second;
});
```

---

## 🔧 PART 2: STL Algorithms Cheat Sheet

### 2.1 Sorting

```cpp
// Basic sort (ascending)
sort(arr.begin(), arr.end());

// Sort in descending order
sort(arr.begin(), arr.end(), greater<int>());

// Sort array of pairs by first, then second
sort(vp.begin(), vp.end());

// Custom sort: sort by frequency (higher first), then by value (smaller first)
sort(arr.begin(), arr.end(), [&](int a, int b) {
    if(freq[a] != freq[b]) return freq[a] > freq[b];
    return a < b;
});

// Sort only a portion
sort(arr.begin() + 2, arr.begin() + 5); // Sort indices 2,3,4
```

---

### 2.2 Binary Search (on sorted array only!)

```cpp
// Check if element exists
bool found = binary_search(arr.begin(), arr.end(), x);

// Find first element >= x (lower_bound)
auto it = lower_bound(arr.begin(), arr.end(), x);
int idx = it - arr.begin(); // Index

// Find first element > x (upper_bound)
auto it = upper_bound(arr.begin(), arr.end(), x);
int idx = it - arr.begin();

// Count occurrences of x in sorted array
int count = upper_bound(arr.begin(), arr.end(), x) - lower_bound(arr.begin(), arr.end(), x);

// Find first element > x and < y
auto it1 = upper_bound(arr.begin(), arr.end(), x);
auto it2 = lower_bound(arr.begin(), arr.end(), y);
```

**CRITICAL:** Array must be sorted before using these!

---

### 2.3 Min / Max / Sum

```cpp
// Min and Max element (returns iterator)
auto it = min_element(arr.begin(), arr.end());
int minVal = *it;
int minIdx = it - arr.begin();

auto it2 = max_element(arr.begin(), arr.end());
int maxVal = *it2;
int maxIdx = it2 - arr.begin();

// Sum of all elements
long long sum = accumulate(arr.begin(), arr.end(), 0LL);

// Count occurrences of a value
int cnt = count(arr.begin(), arr.end(), x);

// Find first occurrence
auto it = find(arr.begin(), arr.end(), x);
if(it != arr.end()) { /* found */ }

// Reverse array
reverse(arr.begin(), arr.end());

// Check if all elements satisfy condition
bool allPos = all_of(arr.begin(), arr.end(), [](int x){ return x > 0; });
```

---

### 2.4 GCD / LCM (C++17)

```cpp
// GCD (C++17 and later)
int g = gcd(a, b);

// LCM
long long l = (1LL * a * b) / gcd(a, b);

// If compiler doesn't support C++17:
int __gcd(int a, int b) {  // Note: double underscore
    return b == 0 ? a : __gcd(b, a % b);
}
```

---

## 🎯 PART 3: Problem → STL Mapping

### When you see THIS problem → Use THIS STL

| Problem Type | STL to Use | Template |
|-------------|-----------|----------|
| **Sort array** | `sort()` | `sort(arr.begin(), arr.end());` |
| **Sort by custom rule** | `sort()` + lambda | `sort(arr.begin(), arr.end(), [&](int a, int b){ ... });` |
| **Find Kth largest** | `sort()` + index | `sort(arr.begin(), arr.end()); cout << arr[n-k];` |
| **Count frequency** | `unordered_map` | `unordered_map<int,int> freq; for(x:arr) freq[x]++;` |
| **Find duplicates** | `unordered_map` or `set` | `unordered_set<int> s; for(x:arr) if(s.count(x)) ... else s.insert(x);` |
| **Check if element exists** | `unordered_set` or `binary_search` | `unordered_set<int> s(arr.begin(), arr.end()); s.count(x);` |
| **Remove duplicates** | `set` or `unique()` | `sort(arr.begin(), arr.end()); arr.erase(unique(arr.begin(), arr.end()), arr.end());` |
| **Find max/min** | `max_element()` / `min_element()` | `*max_element(arr.begin(), arr.end());` |
| **Sum of array** | `accumulate()` | `accumulate(arr.begin(), arr.end(), 0LL);` |
| **Reverse array** | `reverse()` | `reverse(arr.begin(), arr.end());` |
| **Binary search** | `lower_bound()` / `upper_bound()` | `lower_bound(arr.begin(), arr.end(), x) - arr.begin();` |
| **String reverse** | `reverse()` | `reverse(s.begin(), s.end());` |
| **String palindrome** | `reverse()` + compare | `string t = s; reverse(t.begin(), t.end()); if(s == t)...` |
| **Balanced parentheses** | `stack` | See stack section above |
| **Merge sorted arrays** | Two-pointer OR `merge()` | Manual two-pointer is safer for TCS |
| **Find first/last occurrence** | `lower_bound()` / `upper_bound()` | See binary search section |
| **Kth largest in stream** | `priority_queue` (min-heap) | See priority_queue section |
| **Group anagrams** | `unordered_map<string, vector<string>>` | Sort each string as key |
| **Two sum (sorted)** | Two-pointer | `sort(); int l=0, r=n-1; while(l<r)...` |
| **Subarray with given sum (positive)** | Sliding window | `int start=0, sum=0; for(int end=0; end<n; end++)...` |
| **Leaders in array** | Right-to-left scan | `int maxRight = arr[n-1]; for(int i=n-2; i>=0; i--)...` |
| **Replace with greatest on right** | Right-to-left scan | See Q11 in Final 15 |
| **Wave array** | `swap()` adjacent pairs | `for(int i=0; i+1<n; i+=2) swap(arr[i], arr[i+1]);` |
| **Move zeros to end** | Two-pointer | `int j=0; for(int i=0; i<n; i++) if(arr[i]!=0) arr[j++]=arr[i];` |
| **Dutch National Flag (0,1,2)** | Three-pointer | `int low=0, mid=0, high=n-1; while(mid<=high)...` |
| **Chocolate distribution** | `sort()` + sliding window | `sort(); int minDiff=INT_MAX; for(int i=0; i+m-1<n; i++)...` |
| **Max subarray sum (Kadane)** | Single loop | `int maxSoFar=arr[0], currMax=arr[0]; for(int i=1; i<n; i++)...` |
| **Max product subarray** | Track max and min | See Q10 in Final 15 |
| **Majority element** | `unordered_map` OR Boyer-Moore | `unordered_map<int,int> freq; for(x:arr) if(++freq[x]>n/2)...` |
| **Missing number (1 to N+1)** | Math formula | `expected = (n+1)*(n+2)/2; missing = expected - actualSum;` |
| **Find duplicate** | `unordered_map` OR marking | `unordered_map<int,int> freq; for(x:arr) if(freq[x]++)...` |
| **Intersection of sorted arrays** | Two-pointer | `while(i<m && j<n) { if(a[i]==b[j]) ... }` |
| **Union of sorted arrays** | Two-pointer OR `set` | Similar to intersection |
| **Longest common prefix** | String comparison | `string prefix = strs[0]; for each string, while(prefix[j]!=str[i][j]) prefix=prefix.substr(0,j);` |
| **String rotation check** | Concatenation trick | `string temp = s1+s1; if(temp.find(s2)!=string::npos)...` |
| **Anagram check** | `unordered_map` OR sort | `sort both strings; if equal -> anagram` |
| **First non-repeating character** | `unordered_map` | `unordered_map<char,int> freq; for(c:s) freq[c]++; for(c:s) if(freq[c]==1)...` |
| **Most frequent character** | `unordered_map` | Same as frequency, track max |
| **Remove vowels** | String building | `string result; for(char c:s) if(c!='a' && c!='e'...) result+=c;` |
| **Toggle case** | ASCII manipulation | `if(isupper(c)) c=tolower(c); else c=toupper(c);` |
| **Decimal to binary** | Division by 2 | `while(n>0) { binary = to_string(n%2) + binary; n/=2; }` |
| **Binary to decimal** | Power of 2 | `int dec=0, pow=1; for(int i=s.length()-1; i>=0; i--)...` |
| **Slab pricing** | If-else ladder | See situational questions guide |
| **Fraud detection** | `unordered_map` with timestamp | `unordered_map<string, int> lastSeen;` |
| **Greedy selection** | `sort()` + accumulate | `sort(weights.begin(), weights.end()); int total=0, count=0;` |

---

## 📝 PART 4: Copy-Paste Templates for Exam

### Template 1: Basic Input + Output
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

    // YOUR LOGIC HERE

    cout << result << endl;
    return 0;
}
```

### Template 2: String Input
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;              // Single word
    // OR
    getline(cin, s);       // Full line (use cin.ignore() before if you used cin >> before)

    // YOUR LOGIC HERE

    cout << result << endl;
    return 0;
}
```

### Template 3: Frequency Count
```cpp
unordered_map<int, int> freq;
for(int x : arr) freq[x]++;

// Find element with max frequency
int maxFreq = 0, ans = -1;
for(auto &p : freq) {
    if(p.second > maxFreq) {
        maxFreq = p.second;
        ans = p.first;
    }
}
```

### Template 4: Two-Pointer (Sorted Arrays)
```cpp
int i = 0, j = 0;
while(i < n && j < m) {
    if(arr1[i] == arr2[j]) {
        // Found match
        i++; j++;
    }
    else if(arr1[i] < arr2[j]) i++;
    else j++;
}
```

### Template 5: Sliding Window (Positive Numbers)
```cpp
int start = 0;
long long sum = 0;
for(int end = 0; end < n; end++) {
    sum += arr[end];
    while(sum > target && start <= end) {
        sum -= arr[start];
        start++;
    }
    if(sum == target) {
        cout << start << " " << end << endl;
        return 0;
    }
}
```

### Template 6: Kadane's Algorithm
```cpp
long long maxSoFar = arr[0], currMax = arr[0];
for(int i = 1; i < n; i++) {
    currMax = max((long long)arr[i], currMax + arr[i]);
    maxSoFar = max(maxSoFar, currMax);
}
cout << maxSoFar << endl;
```

### Template 7: Bubble Sort (If asked to implement)
```cpp
for(int i = 0; i < n - 1; i++) {
    bool swapped = false;
    for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapped = true;
        }
    }
    if(!swapped) break; // Optimization
}
```

### Template 8: GCD / LCM
```cpp
// Use this if __gcd is available
int g = __gcd(a, b);
long long l = (1LL * a * b) / g;

// OR manual Euclidean
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
```

### Template 9: Check Prime
```cpp
bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
```

### Template 10: Palindrome Number
```cpp
long long original = n, rev = 0;
while(n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
if(original == rev) cout << "YES" << endl;
else cout << "NO" << endl;
```

---

## 🧠 PART 5: Last-Day Mental Prep

### The Night Before (Tonight)
- [ ] Review this cheat sheet for 30 minutes. Don't memorize — just familiarize.
- [ ] Solve 3 questions you've already done (to build confidence, not to learn).
- [ ] Set 2 alarms. Keep admit card, ID, pen ready.
- [ ] Sleep by 10 PM. **7+ hours of sleep is non-negotiable.**

### Morning of the Exam
- [ ] Wake up 2 hours before the exam.
- [ ] Light breakfast. Avoid heavy food (makes you sleepy).
- [ ] Solve 2 easy questions in 20 minutes (just to warm up your brain).
- [ ] Reach the center 30 minutes early.
- [ ] Deep breaths. You've prepared 108+ questions. You ARE ready.

### During the Exam
1. **Read the first question.** If it looks familiar → solve it.
2. **If Q1 looks hard** → read Q2. Pick the easier one first.
3. **Write pseudocode as comments** before actual code. 2 minutes of planning.
4. **Test with given example manually.** Trace through your code line by line.
5. **Submit only when confident.** But don't overthink — partial marks > no marks.
6. **If stuck > 15 minutes** → write brute force, then optimize.

### Emergency: What If I Blank Out?
- Take 3 deep breaths.
- Re-read the problem. Underline numbers.
- Ask: "Is this a sort problem? A search problem? A frequency problem?"
- Pick the simplest approach that works. Brute force is okay.
- Remember: **You've solved 108 questions. This is just #109.**

---

## 🏆 Final Words From Your Mentor

> *"You didn't just prepare. You over-prepared. 108 questions across arrays, strings, numbers, situational logic, searching, and sorting. That's not luck — that's discipline. Walk into that exam hall knowing that you've done the work. The rest is just execution."*

**You've got this. Crack TCS NQT. Make yourself proud. 🚀**

---

## 📥 Quick Reference Card (Print This!)

```
┌─────────────────────────────────────────────────────────────┐
│  TCS NQT EXAM DAY — QUICK REFERENCE                         │
├─────────────────────────────────────────────────────────────┤
│  HEADERS: #include <bits/stdc++.h>                          │
│  SPEED:   ios_base::sync_with_stdio(false); cin.tie(NULL);  │
│  NO EXTRA TEXT IN OUTPUT                                    │
├─────────────────────────────────────────────────────────────┤
│  SORT:     sort(arr.begin(), arr.end());                    │
│  REVERSE:  reverse(arr.begin(), arr.end());                 │
│  MAX:      *max_element(arr.begin(), arr.end());            │
│  MIN:      *min_element(arr.begin(), arr.end());            │
│  SUM:      accumulate(arr.begin(), arr.end(), 0LL);         │
│  FIND:     find(arr.begin(), arr.end(), x);                 │
│  COUNT:    count(arr.begin(), arr.end(), x);                │
├─────────────────────────────────────────────────────────────┤
│  BINARY SEARCH (sorted only!):                              │
│  lower_bound(arr.begin(), arr.end(), x);  // first >= x     │
│  upper_bound(arr.begin(), arr.end(), x);  // first > x      │
├─────────────────────────────────────────────────────────────┤
│  FREQUENCY: unordered_map<int,int> freq; freq[x]++;         │
│  UNIQUE:    unordered_set<int> s; s.insert(x);              │
│  PAIR:      pair<int,int> p = {a,b}; p.first, p.second      │
├─────────────────────────────────────────────────────────────┤
│  STRING:    s.length(), s.substr(), s.find(), to_string()   │
│  CHAR:      isalpha(), isdigit(), toupper(), tolower()      │
├─────────────────────────────────────────────────────────────┤
│  GCD:       __gcd(a, b)                                     │
│  LCM:       (1LL * a * b) / __gcd(a, b)                     │
├─────────────────────────────────────────────────────────────┤
│  EDGE CASES TO CHECK:                                       │
│  • Empty array / string                                     │
│  • Single element                                           │
│  • All elements same                                        │
│  • Zero / Negative input                                    │
│  • Integer overflow (use long long)                         │
└─────────────────────────────────────────────────────────────┘
```
