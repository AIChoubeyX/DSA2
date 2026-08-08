# 📘 C++ `unordered_map` Revision Notes (Beginner → TCS NQT)

---

# What is `unordered_map`?

`unordered_map` is a **key-value data structure**.

It stores data in the form:

```
Key  -> Value
```

For frequency-based problems:

```
Key   = Array Element
Value = Frequency
```

Example:

Input:

```
1 2 2 3 1 1
```

Map becomes:

```
1 -> 3
2 -> 2
3 -> 1
```

---

# Why use unordered_map?

Without a map:

Finding the frequency of an element takes **O(n)**.

With a map:

Finding the frequency takes **O(1)** (average).

---

# Syntax

```cpp
#include <unordered_map>

unordered_map<int,int> mp;
```

---

# Most Important Operations

## 1. Increase Frequency

```cpp
mp[arr[i]]++;
```

If the key doesn't exist,

```
mp[arr[i]] = 0
```

is automatically created.

Then

```
0 + 1
```

becomes

```
1
```

---

## 2. Traverse Map

```cpp
for(auto it : mp)
{
    cout << it.first << " -> " << it.second << endl;
}
```

Remember

```
it.first  = Key

it.second = Value
```

For frequency problems,

```
it.first

↓

Element
```

```
it.second

↓

Frequency
```

---

## 3. Find a Key

```cpp
if(mp.find(x) != mp.end())
{
    cout<<"Present";
}
else
{
    cout<<"Not Present";
}
```

Never use

```cpp
mp[x]
```

to check existence.

Reason:

`mp[x]` creates a new key with value `0` if it does not exist.

---

## 4. Number of Distinct Elements

```cpp
cout << mp.size();
```

---

# The Universal Pattern (This Solves Most Beginner HashMap Problems)

```cpp
unordered_map<int,int> mp;

// Build frequency map
for(int i = 0; i < n; i++)
{
    mp[arr[i]]++;
}

// Process the map
for(auto it : mp)
{
    // Apply condition here
}
```

This pattern is used in almost every beginner-level frequency problem.

---

# Question 1 - Frequency of Every Element

### Problem

Print frequency of every element.

### Logic

```cpp
unordered_map<int,int> mp;

for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}

for(auto it:mp)
{
    cout<<it.first<<" -> "<<it.second<<endl;
}
```

### Time Complexity

```
O(n)
```

### Edge Cases

✔ Duplicate elements

✔ Negative numbers

✔ Single element

✔ Empty array (prints nothing)

---

# Question 2 - Highest Frequency Element

### Problem

Find element having maximum frequency.

### Logic

```cpp
int maxFreq = 0;
int element = arr[0];

for(auto it:mp)
{
    if(it.second > maxFreq)
    {
        maxFreq = it.second;
        element = it.first;
    }
}

cout<<element<<endl;
cout<<maxFreq;
```

### Edge Cases

✔ One element

✔ All elements same

✔ Multiple duplicates

### Note

If two elements have the same maximum frequency,

`unordered_map` does NOT guarantee which one is visited first.

---

# Question 3 - Lowest Frequency Element

### Logic

```cpp
int minFreq = n;
int element = arr[0];

for(auto it:mp)
{
    if(it.second < minFreq)
    {
        minFreq = it.second;
        element = it.first;
    }
}
```

### Edge Cases

✔ One element

✔ All unique

✔ Multiple minimum frequencies

---

# Question 4 - Count Distinct Elements

### Logic

```cpp
cout<<mp.size();
```

### Example

Input

```
1 2 2 3 3 5
```

Output

```
4
```

Edge Cases

✔ Empty array → 0

✔ All same → 1

✔ All unique → n

---

# Question 5 - Frequency of a Particular Element

### Logic

```cpp
int x;
cin>>x;

if(mp.find(x)!=mp.end())
{
    cout<<mp[x];
}
else
{
    cout<<"Element not present";
}
```

### Edge Cases

✔ Element exists

✔ Element absent

Never do

```cpp
cout<<mp[x];
```

without checking.

Reason:

It inserts

```
x -> 0
```

into the map.

---

# Question 6 - Print Repeating Elements

### Logic

```cpp
for(auto it:mp)
{
    if(it.second>1)
        cout<<it.first<<" ";
}
```

### Edge Cases

✔ No repeating elements

Print

```
No repeating elements
```

using a boolean flag.

```cpp
bool found=false;

for(auto it:mp)
{
    if(it.second>1)
    {
        cout<<it.first<<" ";
        found=true;
    }
}

if(!found)
    cout<<"No repeating elements";
```

---

# Question 7 - Print Non-Repeating Elements

### Logic

```cpp
bool found=false;

for(auto it:mp)
{
    if(it.second==1)
    {
        cout<<it.first<<" ";
        found=true;
    }
}

if(!found)
{
    cout<<"No non-repeating element";
}
```

### Edge Cases

✔ Every element repeats

✔ Every element unique

---

# Question 8 - Check Whether Element Exists

### Logic

```cpp
int x;
cin>>x;

if(mp.find(x)!=mp.end())
{
    cout<<"Present";
}
else
{
    cout<<"Not Present";
}
```

### Edge Cases

✔ Present

✔ Absent

This is better than searching the whole array.

---

# Question 9 - Find Element Having Frequency K

Example

```
Find element whose frequency is exactly 3.
```

### Logic

```cpp
int k;
cin>>k;

bool found=false;

for(auto it:mp)
{
    if(it.second==k)
    {
        cout<<it.first;
        found=true;
        break;
    }
}

if(!found)
{
    cout<<"No element has frequency "<<k;
}
```

### Edge Cases

✔ Frequency exists

✔ Frequency doesn't exist

---

# Question 10 - Mode of Array

Mode means

```
Element having highest frequency.
```

Same code as Question 2.

```cpp
int maxFreq=0;
int mode=arr[0];

for(auto it:mp)
{
    if(it.second>maxFreq)
    {
        maxFreq=it.second;
        mode=it.first;
    }
}

cout<<mode;
```

---

# Common Edge Cases Checklist

Always think about these while solving:

### 1. Empty Array

```
n = 0
```

### 2. Single Element

```
5
```

### 3. All Elements Same

```
2 2 2 2
```

### 4. All Elements Unique

```
1 2 3 4
```

### 5. Negative Numbers

```
-1 -1 -2
```

### 6. Element Not Present

Use

```cpp
mp.find(x)!=mp.end()
```

### 7. Multiple Answers

Remember

`unordered_map`

does **NOT** maintain order.

---

# How to Identify a HashMap Question

Whenever you read words like:

* Frequency
* Count
* Occurrence
* Repeating
* Duplicate
* Unique
* Distinct
* Present / Not Present
* Majority
* Mode

Immediately think

> "Can I store **Element → Information** in an `unordered_map`?"

If YES,

then HashMap is probably the correct approach.

---

# My 5-Step Thinking Process

Whenever I see a new question, I ask myself:

### Step 1

What should be my **Key**?

Usually

```
Element
```

---

### Step 2

What should be my **Value**?

Examples

```
Frequency

Index

True/False

Count
```

---

### Step 3

Build the map.

```cpp
mp[arr[i]]++;
```

---

### Step 4

Traverse the map.

```cpp
for(auto it:mp)
```

---

### Step 5

Apply the condition.

Examples

```
>

<

==1

>1

==k

find()
```

---

# Golden Formula

```
Traverse Array

↓

Store Information

↓

Traverse Map

↓

Apply Condition

↓

Print Answer
```

---

# Final Revision Table

| Question               | Logic to Change               |
| ---------------------- | ----------------------------- |
| Frequency Count        | Print `it.first`, `it.second` |
| Highest Frequency      | `if(it.second > maxFreq)`     |
| Lowest Frequency       | `if(it.second < minFreq)`     |
| Distinct Elements      | `mp.size()`                   |
| Frequency of X         | `find()` then `mp[x]`         |
| Repeating Elements     | `it.second > 1`               |
| Non-Repeating Elements | `it.second == 1`              |
| Check Present          | `mp.find(x)`                  |
| Frequency = K          | `it.second == k`              |
| Mode                   | Same as Highest Frequency     |

---

# Final Golden Rule ⭐

**Don't memorize 10 different programs.**

Memorize **one pattern**:

```cpp
unordered_map<int,int> mp;

for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}

for(auto it:mp)
{
    // Only this condition changes
}
```

For beginner-level coding rounds like **TCS NQT**, **Infosys**, **Wipro**, **Capgemini**, and **Cognizant**, changing just the condition in the second loop is enough to solve a large number of HashMap-based frequency questions.
