# 📘 C++ `unordered_map` for Strings (TCS NQT Beginner Notes)

---

# What is the Difference from Integer HashMap?

Almost **nothing changes**.

For integers, we wrote:

```cpp
unordered_map<int, int> mp;
```

For strings, we simply write:

```cpp
unordered_map<string, int> mp;
```

Here,

```text
Key   = String (Word)

Value = Frequency
```

Example

Input

```text
6
apple
banana
apple
mango
banana
apple
```

Map becomes

```text
apple  -> 3
banana -> 2
mango  -> 1
```

Everything else remains exactly the same.

---

# Universal Pattern

Every beginner string HashMap problem follows this pattern.

```cpp
unordered_map<string,int> mp;

for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}

for(auto it : mp)
{
    // Apply condition here
}
```

---

# Question 1 : Print Frequency of Every Word

## Problem

Given N strings, print the frequency of every word.

### Code

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    unordered_map<string,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
```

### Example

Input

```text
6
apple
banana
apple
mango
banana
apple
```

Output

```text
apple -> 3
banana -> 2
mango -> 1
```

### Edge Cases

* One word only
* All words same
* All words unique
* Mixed uppercase/lowercase (`Apple` and `apple` are different)

---

# Question 2 : Highest Frequency Word

## Problem

Print the word having the highest frequency.

### Code

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    unordered_map<string,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    string word;

    for(auto it : mp)
    {
        if(it.second > maxFreq)
        {
            maxFreq = it.second;
            word = it.first;
        }
    }

    cout << "Word : " << word << endl;
    cout << "Frequency : " << maxFreq;

    return 0;
}
```

### Edge Cases

* One word
* All words same
* Two words with same frequency
* Empty input (if allowed)

---

# Question 3 : Frequency of a Particular Word

## Problem

Print the frequency of a given word.

### Code

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    unordered_map<string,int> mp;

    for(int i=0;i<n;i++)
        mp[arr[i]]++;

    string x;
    cin >> x;

    if(mp.find(x)!=mp.end())
    {
        cout << "Frequency = " << mp[x];
    }
    else
    {
        cout << "Word not present";
    }

    return 0;
}
```

### Edge Cases

* Word present
* Word absent
* Same word repeated many times

---

# Remaining Questions (Core Logic Only)

---

# Question 4 : Lowest Frequency Word

```cpp
int minFreq = n;
string word;

for(auto it : mp)
{
    if(it.second < minFreq)
    {
        minFreq = it.second;
        word = it.first;
    }
}
```

Edge Cases

* One word
* All unique
* Multiple words having minimum frequency

---

# Question 5 : Count Distinct Words

```cpp
cout << mp.size();
```

Edge Cases

* Empty input
* All same
* All unique

---

# Question 6 : Print Repeating Words

```cpp
bool found = false;

for(auto it : mp)
{
    if(it.second > 1)
    {
        cout << it.first << " ";
        found = true;
    }
}

if(!found)
{
    cout << "No repeating word";
}
```

---

# Question 7 : Print Non-Repeating Words

```cpp
bool found = false;

for(auto it : mp)
{
    if(it.second == 1)
    {
        cout << it.first << " ";
        found = true;
    }
}

if(!found)
{
    cout << "No non-repeating word";
}
```

---

# Question 8 : Check Whether a Word Exists

```cpp
string x;
cin >> x;

if(mp.find(x) != mp.end())
{
    cout << "Present";
}
else
{
    cout << "Not Present";
}
```

---

# Question 9 : Find Word Having Frequency K

```cpp
int k;
cin >> k;

bool found = false;

for(auto it : mp)
{
    if(it.second == k)
    {
        cout << it.first;
        found = true;
        break;
    }
}

if(!found)
{
    cout << "No word has frequency " << k;
}
```

---

# Question 10 : Mode of Words

Mode = Word having highest frequency.

Same logic as Question 2.

```cpp
int maxFreq = 0;
string mode;

for(auto it : mp)
{
    if(it.second > maxFreq)
    {
        maxFreq = it.second;
        mode = it.first;
    }
}

cout << mode;
```

---

# Important Notes

## Never do this for checking existence

```cpp
cout << mp[x];
```

Reason

If `x` is absent,

```cpp
mp[x]
```

creates

```text
x -> 0
```

Instead use

```cpp
if(mp.find(x) != mp.end())
```

---

# Time Complexity

Building HashMap

```text
O(n)
```

Traversing HashMap

```text
O(number of distinct words)
```

Overall

```text
O(n)
```

Average Case.

---

# Common Edge Cases

✔ One word

✔ All words same

✔ All words unique

✔ Word not present

✔ Mixed uppercase/lowercase

✔ Empty input (if allowed)

---

# How to Identify a String HashMap Question

Whenever the question contains words like

* Frequency
* Occurrence
* Count
* Repeated Word
* Unique Word
* Distinct Word
* Mode
* Most Frequent Word
* Check Whether Word Exists

Immediately think

```cpp
unordered_map<string,int>
```

---

# Golden Formula

```cpp
unordered_map<string,int> mp;

for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}

for(auto it : mp)
{
    // Change only the condition
}
```

Don't memorize 10 different programs.

Memorize **one pattern**, and only change the condition in the second loop.

That's exactly how most beginner-level `unordered_map` questions are solved in TCS NQT and similar placement exams.
