# TCS NQT — 10-Day DSA Sprint (Top 50 Questions)

**Goal:** You don't need to be a DSA expert. You need to reliably solve **1 of 2** coding questions. This list is weighted by how often each topic actually shows up, so you spend your limited time where it pays off most.

**Format reminder:** 2 coding questions, ~60 minutes, partial marking (you still get credit for passing some test cases even if your solution isn't fully correct/optimal), no negative marking. So: always submit *something* that compiles and handles the basic case, even if you can't finish edge cases.

---

## Topic weight (why the list is ordered this way)
| Topic | Approx. share | Priority |
|---|---|---|
| Arrays & Strings | ~35% | 🔴 Must-master |
| Dynamic Programming (basic) | ~20% | 🟠 High |
| Trees / BST (basic) | ~15% | 🟡 Medium |
| Linked Lists | ~10% | 🟡 Medium |
| Sorting / Searching / Math / Hashing | ~20% combined | 🟢 Cover the basics |

---

## 10-Day Schedule

**Day 1–3: Arrays & Strings (the 35% — do these first, do them cold)**
1. Reverse an array / string in place
2. Find the second largest / smallest distinct element
3. Move all zeros to the end (keep order) — *actual repeated TCS question*
4. Find duplicates in an array
5. Find the missing number in 1 to N
6. Find pairs with a given sum (two-sum)
7. Maximum subarray sum (Kadane's algorithm)
8. Rotate an array by K positions
9. Check if a string is a palindrome
10. Reverse words in a sentence
11. Check if two strings are anagrams
12. Count vowels/consonants in a string
13. Find the first non-repeating character
14. Longest substring without repeating characters
15. Remove duplicates from a sorted array
16. Merge two sorted arrays
17. Find the intersection of two arrays
18. Matrix transpose / rotate a matrix 90°
19. Print a matrix in spiral order
20. Find the largest element in each row/column of a matrix

**Day 4–5: Dynamic Programming basics (the 20% — pattern-only, not deep DP)**
21. Fibonacci series (recursive + memoized)
22. Climbing stairs (count ways to reach top)
23. Coin change (minimum coins) — basic version
24. Longest common subsequence (basic 2-string version)
25. 0/1 Knapsack — basic version
26. Maximum sum of non-adjacent elements
27. Count ways to tile a 2×N board
28. Minimum path sum in a grid
29. Longest increasing subsequence
30. Subset sum problem (does a subset sum to K?)

**Day 6: Linked Lists (10% — just the classics)**
31. Reverse a linked list
32. Detect a cycle in a linked list
33. Find the middle of a linked list
34. Merge two sorted linked lists
35. Remove Nth node from the end
36. Check if a linked list is a palindrome

**Day 7: Trees / BST (15% — keep it to traversals + basic checks)**
37. Inorder / Preorder / Postorder traversal
38. Level order traversal (BFS)
39. Height / depth of a binary tree
40. Check if a binary tree is a BST
41. Find the lowest common ancestor (LCA)
42. Count leaf nodes
43. Mirror/invert a binary tree

**Day 8: Sorting, Searching, Hashing (fill-in topics)**
44. Implement bubble/selection/insertion sort (know how, not just call library)
45. Binary search (iterative + recursive)
46. Find majority element (appears > n/2 times)
47. Frequency count using a hashmap (most frequent element)
48. Check if array can be sorted with one swap
49. Find all pairs with a given difference

**Day 9: Math / Misc (small but easy points)**
50. Check prime, factorial, GCD/LCM, Armstrong number, and basic number-series printing (these show up as "warm-up" style questions and are easy free marks)

**Day 10: Full mock + revision**
- Take 1–2 timed mock tests (60 min, 2 questions) under exam conditions
- Re-attempt any of the 50 you got stuck on
- Review your "gotcha" list (see below)

---

## Test-day strategy
- **Read both questions first**, pick the one that matches a pattern you recognize, and attack that one fully before touching the other.
- **Always write brute-force first if you're stuck** — partial marking means a working O(n²) solution beats a blank screen.
- **Handle edge cases explicitly**: empty array, single element, all same elements, negative numbers — TCS test cases love these.
- **Watch input/output format carefully** — a surprising number of "wrong answer" verdicts on TCS NQT are actually input-parsing mistakes, not logic errors.

## Keep a "gotcha" log
Every time you get something wrong, write one line: what tripped you up (off-by-one, wrong loop bound, forgot to handle empty input, etc.). Re-read this list the night before the exam — it's often more useful than solving 10 new problems.

Good luck — with 10 focused days on this list, you're in solid shape to land at least one full solve.
