# DSA2 - Data Structures and Algorithms Practice

A comprehensive collection of C++ programs covering fundamental programming concepts, functions, operators, loops, and pattern printing exercises. This repository serves as a learning resource for understanding basic data structures and algorithms in C++.

## 📁 Project Structure

### 1. Functions (`Functions/`)
Programs demonstrating function concepts and parameter passing mechanisms:

- **sum.cpp** - Simple addition function that takes two integers and returns their sum. Demonstrates basic function definition and return values.

- **fact.cpp** - Factorial calculation using iterative function. Includes comments about default arguments and differences between pass-by-value and pass-by-reference mechanisms. Calculates n! for a given positive integer.

- **swap.cpp** - Demonstrates the critical difference between pass-by-value and pass-by-reference. The code shows an initial incorrect approach (pass-by-value) that fails to swap values, followed by the correct implementation using references (`int &n, int &m`) to successfully swap two integers.

### 2. Operators (`operators/`)
Programs demonstrating various C++ operators and their practical applications:

- **comparison.cpp** - Tests all comparison operators (==, !=, >, <, >=, <=) on two user-input integers and displays boolean results (1 for true, 0 for false).

- **logical.cpp** - Demonstrates logical operators (&&, ||, !) with practical examples. Includes a vowel/consonant checker that uses the OR operator to identify if a character is a vowel (a, e, i, o, u). Also contains examples of using AND (&&), OR (||), and NOT (!) operators with multiple numbers.

- **main.cpp** - Demonstrates post-increment (++) and pre-increment operators. Shows the difference between `b = a++` (post-increment) and `++a` (pre-increment) operations and their effects on variable values.

### 3. While Loops (`whileloop/`)
Loop control structures:

- **basic.cpp** - Implements a do-while loop that prints a multiplication table (numbers multiplied by 2, iteratively) for a user-input positive integer. The do-while structure ensures the loop executes at least once before checking the condition.

### 4. Pattern Printing (`patternprinting/`)
Various pattern printing programs using nested loops to create visual patterns:

- **basic.cpp** - Creates a square pattern by printing "raja jii " repeated n times in each row, for n rows total. Uses nested loops to create an n×n grid.

- **abcd.cpp** - Alphabet pattern generator. Prints alphabet characters (a, b, c, d, etc.) in a grid pattern. Each row displays a specific character repeated n times, advancing through the alphabet with each row.

- **onetwothree.cpp** - Sequential number grid pattern. Prints numbers 1-n in each row, creating a grid where each row contains consecutive integers from 1 to n.

- **onetwo.cpp** - Number pattern variation using nested loops for different numeric pattern outputs.

- **tri.cpp** - Triangle patterns with multiple variations including:
  - Star triangles (printing * symbols in increasing pattern)
  - Number triangles (printing 1, 2, 3... in decreasing order per row)
  - Various triangle orientations and configurations

- **hardtriangle.cpp** - Right-aligned triangle pattern with numbers. Creates a triangle where numbers (1, 2, 3...) are printed in a right-aligned triangular format.

- **pallindromepryamid.cpp** - Palindrome pyramid pattern. Creates a centered pyramid where each row contains ascending then descending numbers (e.g., row 3 prints: 1 2 3 2 1). Uses spacing to center the pyramid.

- **pp1.cpp** - Additional pattern variations and exercises for pattern printing practice.

- **top5.cpp** - Top 5 pattern exercises collection for reinforcement learning.

- **tempCodeRunnerFile.cpp** - Temporary file (likely from VS Code's Code Runner extension).

## 🚀 How to Compile & Run

### Windows (MinGW/GCC)
```bash
# Navigate to desired folder
cd operators

# Compile
g++ -o program program.cpp

# Run
.\program.exe
```

### Linux/Mac
```bash
# Navigate to desired folder
cd operators

# Compile
g++ -o program program.cpp

# Run
./program
```

## 📝 Examples

### Comparison Operators
```cpp
// comparison.cpp - Compares two numbers using all comparison operators
```

### Pattern Examples
- **Triangle Pattern**: Right-aligned triangle with ascending numbers
- **Palindrome Pyramid**: Symmetric number pyramid (1, 121, 12321...)
- **Alphabet Grid**: Character patterns with incrementing letters

## 🛠️ Requirements
- C++ compiler (GCC/MinGW/Clang)
- C++11 or higher

## 📚 Learning Objectives
- Master C++ operators (comparison, logical, increment/decrement)
- Understand loop control structures (while, do-while, for)
- Practice nested loops for pattern generation
- Develop problem-solving skills with algorithmic thinking

## 👤 Author
**AIChoubeyX**

---
*Repository for learning and practicing fundamental DSA concepts in C++*
