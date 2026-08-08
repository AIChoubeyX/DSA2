# DSA2 Exam Recall Sheet

This file is a short memory aid for the non-excluded questions in this workspace.
It intentionally skips `arrays/`, `arrays1/`, `Functions/`, `operators/`, `patternprinting/`, `quesPractice/`, `sorting/`, and `twopointer/`.

## How To Remember The Whole Set

- If the problem asks for a single best value, look for a running min/max or a prefix sum.
- If the input is sorted, think two pointers or binary search first.
- If the question asks for frequency, duplicates, or counts, think hashmap/set.
- If the question says “first/last occurrence”, “peak”, or “pivot”, it is usually a binary-search-style answer.
- If the question says “move”, “reverse”, or “rotate”, the trick is almost always swap + pointers or reverse three times.
- If the question says “status/alert/eligibility”, read all conditions once, then map them to if-else blocks.

## Array And Search Questions

- BinarySearch.cpp - Classic binary search: keep shrinking `[s, e]` with `mid = s + (e - s) / 2`; return index or `-1`.
- binarysearch/main.cpp - Same binary search template, but prints the answer instead of returning it.
- binarysearch/indexno.cpp - Same as above; the trick is just “sorted array + mid comparison”.
- occurence.cpp - First and last occurrence: search left for the first hit, then search right for the last hit; count = `last - first + 1`.
- peak.cpp - Peak element: if `arr[mid] < arr[mid + 1]`, go right; otherwise go left. Stop when `s == e`.
- pivotelement.cpp - Pivot index: compare left sum and right sum using total sum and a running left sum.
- Check_Sorted.cpp - One pass only: if any `arr[i] > arr[i + 1]`, it is not sorted.
- Largest_Element.cpp - Keep updating one variable `largest`; never sort for this.
- smallest.cpp - Same idea as largest, but with `INT_MAX` and `<`.
- avgofarr.cpp - Sum everything, then divide by `n`. Nothing fancy.
- missingnumber.cpp - Missing number = expected sum of `1..n` minus actual sum.
- arrangeposneg.cpp - Put positives at even positions and negatives at odd positions in a new array.
- arrayunion.cpp - Two sorted arrays: move the smaller pointer, and remember the last printed value to avoid duplicates.
- intersection.cpp - Two sorted arrays: if values match, print and move both; otherwise move the smaller side.
- consecutive1s.cpp - Count the current streak of `1`s and reset to zero on `0`.
- dutchNationalflag.cpp - Three pointers: `i` for 0, `j` for current, `k` for 2. Swap 0s left, 2s right, skip 1s.
- reverse2.cpp - Reverse the whole array with two pointers or `reverse(arr, arr + n)`.
- reversebyk.cpp - Reverse the last `k` elements with the three-reverse trick; always normalize `k` first.
- revrseby1.cpp - Rotate left by one: save the first element, shift everyone left, put the saved value at the end.
- Move_Zeroes.cpp - Compact non-zero values forward with one write pointer; zeros naturally slide to the end.
- moving0toend.cpp - Same zero-moving idea, but first find the first zero, then swap later non-zeros forward.
- Remove_Duplicates.cpp - Sorted array duplicate removal: keep a slow pointer `i`, and write only when `arr[i] != arr[j]`.
- Second_Largest.cpp - Track `largest` and `secondLargest` in one pass; update both carefully when a new max appears.
- majorityellement.cpp - Only a brute-force majority-element skeleton is present; the memory hook is “count > n/2”.

## Subarray And Sequence Questions

- sumoflargestsubarray.cpp - Same idea in three levels: brute force, better prefix-style accumulation, and Kadane.
- pdtoflargestsubarray.cpp - Maximum product subarray: keep both `maxProd` and `minProd`, and swap them when the current number is negative.
- maxsubarraywithsumk.cpp - Prefix sum + hashmap: count how many earlier prefix sums equal `currentSum - k`.
- stock.cpp - Best profit: track the minimum price seen so far, then maximize `currentPrice - minPrice`.
- sub2.cpp - Subset check with set: insert all of array 1, then test every element of array 2.

## Binary Search Style Questions

- BinarySearch.cpp - Search in a sorted array by cutting the range in half each time.
- occurence.cpp - The trick is two binary searches: one biased left, one biased right.
- peak.cpp - Peak is where slope changes; binary search uses `mid + 1` to decide direction.
- pivotelement.cpp - Pivot uses sums, not search order; keep one running left sum.

## Hashmap And Frequency Questions

- hashmap/uniqueElement.cpp - Use a map to count distinct values; the size of the map is the answer.
- hashmap/frequency.cpp - Frequency table: `mp[value]++` for every element.
- hashmap/FirstElementWithFrequencyK.cpp - Build the frequency map first, then scan for the first value whose count matches `k`.
- hashmap/frequncyofaparticularelemnt.cpp - Same frequency map idea, but query one key and check `find` before printing.
- string/frequncyofeachcharacter.cpp - Character frequency is the same map trick, just with `char` keys.

## String Questions

- string/reverse.cpp - Two-pointer string swap from both ends to the middle.
- string/pallindrome.cpp - Compare mirrored characters; stop at the first mismatch.
- string/anagram.cpp - Best trick: count letters in one array of size 26 and cancel with the second string.
- string/reversesentence.cpp - Read words with `stringstream`, then prepend each word to reverse the word order.
- string/reversewordsinsentence.cpp - Reverse each word individually, but keep the word order fixed.
- string/vowels.cpp - Build a new string by skipping vowels; the trick is a simple filter, not replacement.

## Number And Math Questions

- numbers/prime.cpp - Prime check by trying divisors; the better memory hook is `i * i <= n`.
- numbers/allprimeinarange.cpp - The code is actually another prime check, so remember the file name is misleading.
- numbers/fact.cpp - Multiply from `1` to `n`; use `long long` if the value may grow.
- numbers/fibbonaci.cpp - Fibonacci is just the rolling triple: `a`, `b`, `c = a + b`.
- numbers/gcd.cpp - Euclid’s algorithm: `a, b = b, a % b` until `b == 0`.
- numbers/leapyear.cpp - Leap year rule: divisible by 400, or by 4 but not by 100.
- numbers/pallindrome.cpp - Reverse the digits and compare with the original number.
- numbers/perfectno.cpp - Sum proper divisors from `1` to `n - 1`; if the sum equals `n`, it is perfect.
- numbers/strongnumber.cpp - Strong number means sum of factorials of digits; use a small factorial lookup table.
- numbers/armstrong.cpp - Count digits first, then raise each digit to that power and sum.
- numbers/sumofnos.cpp - Sum of digits is just repeated `% 10` and `/ 10`.

## Situational Questions

- situational/couriershippingcost.cpp - Convert slab text into ranges: use `(weight - base)` only after the slab starts.
- situational/electricbillcalculator.cpp - Same slab trick plus fixed meter charge; calculate only the extra portion above each threshold.
- situational/librarylatefee.cpp - Late fee is a staircase: 1–5, 6–10, 11–20, then cancel.
- situational/mobiledataplaner.cpp - Compare MB against `1024`, `1536`, `2048`, `3072`; pick the cheapest sufficient plan.
- situational/shopping.cpp - Total first, discount second, membership last, then `floor()` the result.
- situational/attendance.cpp - Count `A` and `L` separately; full award needs zero of both.

## Day 2 Situational

- day2situational/ss.cpp - Scholarship rule: first check all subjects >= 40, then average >= 60, then count how many are >= 70.
- day2situational/tempratureMonitoring.cpp - Classify each hour into one of four buckets; it is a straight counter problem.
- day2situational/pic.cpp - Inventory categories are just threshold buckets: <10, 10–49, 50–100, >100.
- day2situational/cricket.cpp - Total, average run rate, max over, and zero-over count are all single-pass counters.
- day2situational/bank.cpp - Running balance plus running maximum balance; update max after every transaction.

## Day 3 Situational

- day3situational/password.cpp - Build four booleans: upper, lower, digit, special; strength is just counting categories.
- day3situational/pancard.cpp - PAN format memory hook: 5 uppercase letters, 4 digits, 1 uppercase letter.
- day3situational/customencoding.cpp - Caesar shift for letters, modulo 10 for digits, leave symbols unchanged.

## Loop Question

- whileloop/basic.cpp - The active code is a do-while style multiplication table; remember that do-while prints once before the condition check.

## C File

- main.c - This is the most advanced file here: binary search on an answer with a feasibility check.
- main.c - Memory hook: compress values, count distinct elements per block with stamping, compute `strain = sum * distinct`, and binary search the minimum valid limit.

## Fast Revision Order

1. Binary search family: BinarySearch.cpp, occurence.cpp, peak.cpp, pivotelement.cpp.
2. Array family: reverse2.cpp, reversebyk.cpp, revrseby1.cpp, Move_Zeroes.cpp, moving0toend.cpp, Remove_Duplicates.cpp, arrayunion.cpp, intersection.cpp, missingnumber.cpp, Largest_Element.cpp, smallest.cpp.
3. Kadane and prefix-sum family: sumoflargestsubarray.cpp, maxsubarraywithsumk.cpp, pdtoflargestsubarray.cpp, stock.cpp.
4. Hashmap and string frequency questions.
5. Numbers and situational questions last, because they are mostly condition matching.

## Final Reminder

- When you forget a solution in the exam, do not try to remember the whole code.
- Remember the pattern: two pointers, prefix sum, hashmap, binary search, or condition ladder.
- If the file has several versions of the same problem, the version with the shortest invariant is usually the one to write in the exam.

## Code Snippets To Memorize

These are the smallest useful shapes. The goal is to remember the core loop or invariant, not the full program.

### Array And Search

- BinarySearch.cpp
```cpp
while (s <= e) {
	mid = s + (e - s) / 2;
	if (arr[mid] == target) return mid;
	if (arr[mid] < target) s = mid + 1;
	else e = mid - 1;
}
```

- binarysearch/main.cpp and binarysearch/indexno.cpp
```cpp
int mid = left + (right - left) / 2;
if (arr[mid] == target) return mid;
else if (arr[mid] < target) left = mid + 1;
else right = mid - 1;
```

- occurence.cpp
```cpp
if (arr[mid] == key) {
	first = mid;
	e = mid - 1;
}

if (arr[mid] == key) {
	last = mid;
	s = mid + 1;
}
```

- peak.cpp
```cpp
while (s < e) {
	mid = s + (e - s) / 2;
	if (arr[mid] < arr[mid + 1]) s = mid + 1;
	else e = mid;
}
```

- pivotelement.cpp
```cpp
int leftSum = 0;
for (int i = 0; i < n; i++) {
	int rightSum = totalSum - leftSum - arr[i];
	if (leftSum == rightSum) return i;
	leftSum += arr[i];
}
```

- Check_Sorted.cpp
```cpp
for (int i = 0; i < n - 1; i++) {
	if (arr[i] > arr[i + 1]) return false;
}
```

- Largest_Element.cpp / smallest.cpp
```cpp
int ans = arr[0];
for (int i = 1; i < n; i++) {
	ans = max(ans, arr[i]);
}
```

- avgofarr.cpp
```cpp
int sum = 0;
for (int x : arr) sum += x;
cout << sum / n;
```

- missingnumber.cpp
```cpp
int expected = n * (n + 1) / 2;
int actual = 0;
for (int x : arr) actual += x;
cout << expected - actual;
```

- arrangeposneg.cpp
```cpp
int pos = 0, neg = 1;
for (int x : arr) {
	if (x >= 0) ans[pos] = x, pos += 2;
	else ans[neg] = x, neg += 2;
}
```

- arrayunion.cpp
```cpp
while (i < n && j < m) {
	if (arr1[i] < arr2[j]) print(arr1[i++]);
	else if (arr1[i] > arr2[j]) print(arr2[j++]);
	else { print(arr1[i]); i++; j++; }
}
```

- intersection.cpp
```cpp
while (i < n && j < m) {
	if (arr1[i] < arr2[j]) i++;
	else if (arr1[i] > arr2[j]) j++;
	else { cout << arr1[i] << ' '; i++; j++; }
}
```

- consecutive1s.cpp
```cpp
count = 0;
for (int x : arr) {
	if (x == 1) count++;
	else count = 0;
	maximum = max(maximum, count);
}
```

- dutchNationalflag.cpp
```cpp
int i = 0, j = 0, k = n - 1;
while (j <= k) {
	if (arr[j] == 0) swap(arr[i++], arr[j++]);
	else if (arr[j] == 1) j++;
	else swap(arr[j], arr[k--]);
}
```

- reverse2.cpp
```cpp
int left = 0, right = n - 1;
while (left < right) {
	swap(arr[left], arr[right]);
	left++; right--;
}
```

- reversebyk.cpp
```cpp
int start = n - k;
int end = n - 1;
while (start < end) swap(arr[start++], arr[end--]);
```

- revrseby1.cpp
```cpp
int temp = arr[0];
for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
arr[n - 1] = temp;
```

- Move_Zeroes.cpp and moving0toend.cpp
```cpp
int i = 0;
for (int j = 0; j < n; j++) {
	if (arr[j] != 0) swap(arr[i++], arr[j]);
}
```

- Remove_Duplicates.cpp
```cpp
int i = 0;
for (int j = 1; j < n; j++) {
	if (arr[i] != arr[j]) arr[++i] = arr[j];
}
```

- Second_Largest.cpp
```cpp
if (x > largest) {
	secondLargest = largest;
	largest = x;
} else if (x != largest && x > secondLargest) {
	secondLargest = x;
}
```

- majorityellement.cpp
```cpp
int count = 0;
for (int x : arr) if (x == candidate) count++;
if (count > n / 2) cout << candidate;
```

### Subarray And Sequence

- sumoflargestsubarray.cpp / Kadane
```cpp
int sum = 0, maxi = INT_MIN;
for (int x : arr) {
	sum += x;
	maxi = max(maxi, sum);
	if (sum < 0) sum = 0;
}
```

- pdtoflargestsubarray.cpp
```cpp
if (arr[i] < 0) swap(maxProd, minProd);
maxProd = max(arr[i], maxProd * arr[i]);
minProd = min(arr[i], minProd * arr[i]);
ans = max(ans, maxProd);
```

- maxsubarraywithsumk.cpp
```cpp
mp[0] = 1;
for (int x : nums) {
	cumSum += x;
	if (mp.find(cumSum - k) != mp.end()) result += mp[cumSum - k];
	mp[cumSum]++;
}
```

- stock.cpp
```cpp
int mini = arr[0], profit = 0;
for (int i = 1; i < n; i++) {
	profit = max(profit, arr[i] - mini);
	mini = min(mini, arr[i]);
}
```

- sub2.cpp
```cpp
unordered_set<int> s(arr1, arr1 + n);
for (int i = 0; i < m; i++) {
	if (s.find(arr2[i]) == s.end()) return false;
}
```

### Hashmap And String Frequency

- hashmap/frequency.cpp
```cpp
unordered_map<int, int> mp;
for (int x : arr) mp[x]++;
for (auto it : mp) cout << it.first << " -> " << it.second << endl;
```

- hashmap/FirstElementWithFrequencyK.cpp
```cpp
for (int x : arr) mp[x]++;
for (auto it : mp) {
	if (it.second == freq) return it.first;
}
```

- hashmap/frequncyofaparticularelemnt.cpp
```cpp
if (mp.find(x) != mp.end()) cout << mp[x];
else cout << "Element not present";
```

- string/frequncyofeachcharacter.cpp
```cpp
unordered_map<char, int> freq;
for (char ch : s) freq[ch]++;
```

- string/anagram.cpp
```cpp
int freq[26] = {0};
for (char ch : s1) freq[ch - 'a']++;
for (char ch : s2) freq[ch - 'a']--;
```

- string/pallindrome.cpp
```cpp
int left = 0, right = str.length() - 1;
while (left < right) {
	if (str[left] != str[right]) return false;
	left++; right--;
}
```

- string/reverse.cpp
```cpp
int left = 0, right = str.length() - 1;
while (left < right) {
	swap(str[left++], str[right--]);
}
```

- string/reversesentence.cpp
```cpp
while (ss >> word) {
	result = word + " " + result;
}
result.pop_back();
```

- string/reversewordsinsentence.cpp
```cpp
while (ss >> word) {
	reverse(word.begin(), word.end());
	result += word + " ";
}
```

- string/vowels.cpp
```cpp
if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
	ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
	result += ch;
}
```

### Number And Math

- numbers/prime.cpp
```cpp
for (int i = 2; i * i <= n; i++) {
	if (n % i == 0) return false;
}
```

- numbers/fact.cpp
```cpp
long long fact = 1;
for (int i = 1; i <= n; i++) fact *= i;
```

- numbers/fibbonaci.cpp
```cpp
int a = 0, b = 1;
for (int i = 1; i <= n; i++) {
	cout << a << " ";
	int c = a + b;
	a = b;
	b = c;
}
```

- numbers/gcd.cpp
```cpp
while (b != 0) {
	int temp = b;
	b = a % b;
	a = temp;
}
```

- numbers/leapyear.cpp
```cpp
if (year % 400 == 0) cout << "Leap Year";
else if (year % 100 == 0) cout << "Not a Leap Year";
else if (year % 4 == 0) cout << "Leap Year";
```

- numbers/pallindrome.cpp
```cpp
while (n > 0) {
	int digit = n % 10;
	rev = rev * 10 + digit;
	n /= 10;
}
```

- numbers/perfectno.cpp
```cpp
for (int i = 1; i < n; i++) {
	if (n % i == 0) sum += i;
}
```

- numbers/strongnumber.cpp
```cpp
int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
sum += fact[digit];
```

- numbers/armstrong.cpp
```cpp
while (temp > 0) {
	int digit = temp % 10;
	sum += pow(digit, digits);
	temp /= 10;
}
```

- numbers/sumofnos.cpp
```cpp
while (n > 0) {
	sum += n % 10;
	n /= 10;
}
```

### Situational And Real-World Questions

- situational/couriershippingcost.cpp
```cpp
if (wt <= 1) cost = 50;
else if (wt <= 5) cost = 50 + (wt - 1) * 30;
else if (wt <= 10) cost = 170 + (wt - 5) * 20;
else cost = 270 + (wt - 10) * 15;
```

- situational/electricbillcalculator.cpp
```cpp
if (units <= 100) bill = units * 5;
else if (units <= 200) bill = 100 * 5 + (units - 100) * 7;
else if (units <= 400) bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
```

- situational/librarylatefee.cpp
```cpp
if (days <= 5) fee = days * 2;
else if (days <= 10) fee = 10 + (days - 5) * 4;
else if (days <= 20) fee = 30 + (days - 10) * 5;
else cout << "membership cancelled";
```

- situational/mobiledataplaner.cpp
```cpp
if (u <= 1024) cout << "Plan A";
else if (u <= 1536) cout << "Plan B";
else if (u <= 2048) cout << "Plan C";
else if (u <= 3072) cout << "Plan D";
else cout << "No Plan Available";
```

- situational/shopping.cpp
```cpp
if (total < 1000) finalAmount = total;
else if (total <= 5000) finalAmount = total - total * 0.10;
else finalAmount = total - total * 0.20;

if (m == 'Y' || m == 'y') finalAmount -= finalAmount * 0.05;
```

- situational/attendance.cpp
```cpp
for (char c : record) {
	if (c == 'A') absentCount++;
	else if (c == 'L') lateCount++;
}
```

- day2situational/ss.cpp
```cpp
bool noFail = true;
for (int x : marks) if (x < 40) noFail = false;
bool avgOk = (sum / 5 >= 60);
bool count70 = (cnt >= 3);
```

- day2situational/tempratureMonitoring.cpp
```cpp
if (temp[i] > 40) extreme++;
else if (temp[i] >= 35) high++;
else if (temp[i] >= 25) moderate++;
else low++;
```

- day2situational/pic.cpp
```cpp
if (q < 10) Critical++;
else if (q <= 49) Low++;
else if (q <= 100) Adequate++;
else Excess++;
```

- day2situational/cricket.cpp
```cpp
total_runs += runs[i];
maxi = max(maxi, runs[i]);
if (runs[i] == 0) maiden++;
```

- day2situational/bank.cpp
```cpp
balance += transactions[i];
maxBalance = max(maxBalance, balance);
```

- day3situational/password.cpp
```cpp
if (isUpper(ch)) upper = true;
else if (isLower(ch)) lower = true;
else if (isdigit(ch)) digit = true;
else if (isSpecial(ch)) special = true;
```

- day3situational/pancard.cpp
```cpp
for (int i = 0; i < 5; i++) if (!isUpper(s[i])) invalid();
for (int i = 5; i < 9; i++) if (!isdigit(s[i])) invalid();
if (!isUpper(s[9])) invalid();
```

- day3situational/customencoding.cpp
```cpp
if (ch >= 'A' && ch <= 'Z') s[i] = ((ch - 'A' + k) % 26) + 'A';
else if (ch >= 'a' && ch <= 'z') s[i] = ((ch - 'a' + k) % 26) + 'a';
else if (ch >= '0' && ch <= '9') s[i] = ((ch - '0' + k) % 10) + '0';
```

### Loop And C File

- whileloop/basic.cpp
```cpp
int i = 1;
do {
	cout << n * i << " ";
	i++;
} while (i <= 10);
```

- main.c
```c
if (strain > limit) {
	blocks++;
	sum = d[i];
	distinct = 1;
}

while (low <= high) {
	long long mid = (low + high) / 2;
	if (canSplit(..., mid)) high = mid - 1;
	else low = mid + 1;
}
```
