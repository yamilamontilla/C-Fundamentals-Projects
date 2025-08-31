# C Fundamentals Projects

C Fundamentals Projects is a comprehensive collection of programs developed to strengthen foundational knowledge of the C programming language.  Each project addresses a specific programming concept, including memory management, recursion, file input/output, sorting algorithms, and basic data structures.  

With a problem-solving oriented approach, this repository provides a centralized reference for exploring the building blocks of C development.  
It demonstrates how core principles can be applied to implement efficient solutions, while serving as both a learning resource and a portfolio showcase.  
  

## Tech Stack

<p align="center">
  <!-- C/C++ -->
  <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="C/C++" width="40" height="40"/>
  
  <!-- CLion -->
  <img src="https://resources.jetbrains.com/storage/products/company/brand/logos/CLion_icon.svg" alt="CLion" width="40" height="40"/>
  
  <!-- Visual Studio -->
  <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/visualstudio/visualstudio-plain.svg" alt="Visual Studio" width="40" height="40"/>
</p>

- **Language:** C/C++  
- **IDEs:** CLion, Visual Studio  
- **Operating System:** Windows  

## Key Features

- Comprehensive set of exercises covering the fundamentals of C programming.  
- Implementation of classic algorithms (sorting, searching, recursion).  
- Exploration of arrays, matrices, and elementary data structures.  
- Emphasis on problem-solving and algorithmic thinking.  
- Designed to serve both as a learning resource and as a portfolio showcase.  

## Projects Included

---


### `binary_search_recursive.c`

**Objective:**  
This program implements a recursive binary search algorithm to efficiently locate a specific element within a sorted array of integers. It demonstrates the practical application of divide-and-conquer techniques in algorithm design.

**Concepts Applied:**  
- Recursive function calls  
- Binary search algorithm  
- Array indexing and manipulation  
- Efficient problem-solving through divide-and-conquer strategies  

**Description:**  
The program first reads an integer `n` representing the size of the array, followed by `n` sorted integers. It then reads the target value `x` to search for. The `find_ordered` function recursively divides the array in half, comparing the middle element to the target. If the middle element matches the target, its index is returned; if the target is smaller, the search continues in the lower half, otherwise in the upper half. If the element is not found, the function returns `-1`.

**Potential Applications:**  
This implementation highlights the efficiency of recursive solutions for search problems in sorted datasets. It can serve as a reference for understanding recursion, algorithm optimization, and the practical application of binary search in low-level C programming.

---
  
### `bubble_sort_array.c`

**Objective:**  
This program implements the Bubble Sort algorithm to sort an array of integers in ascending order. It demonstrates fundamental sorting techniques and the concept of iterative comparison-based algorithms in C.

**Concepts Applied:**  
- Nested loops and iteration  
- Array manipulation and indexing  
- Element swapping  
- Basic algorithm design and analysis  

**Description:**  
The program begins by reading an integer `n` representing the size of the array, followed by `n` integers entered by the user. The `sort` function applies the Bubble Sort algorithm: it repeatedly iterates through the array, comparing adjacent elements and swapping them if they are in the wrong order. This process continues until the array is fully sorted. Finally, the program prints the sorted array.

**Potential Applications:**  
Bubble Sort is a simple and intuitive algorithm for educational purposes, ideal for understanding the mechanics of sorting and iteration. While not optimal for large datasets, this implementation serves as a clear reference for foundational algorithmic concepts in C programming.

---
  
### `convolution_of_arrays.c`

**Objective:**  
This program calculates the convolution of two integer arrays, a fundamental operation in signal processing and discrete mathematics. It demonstrates the use of dynamic memory allocation, array manipulation, and nested loops in C.

**Concepts Applied:**  
- Dynamic memory allocation with `malloc` and `free`  
- Array indexing and manipulation  
- Nested loops for pairwise computation  
- Convolution operation and accumulation logic  

**Description:**  
The program first reads an integer `n` representing the size of the two input arrays, followed by the elements of arrays `u` and `v`. It dynamically allocates memory for the input arrays and the resulting array `w`, which has a size of `2n - 1`. The convolution is computed by iterating over every pair of elements `(u[i], v[j])` and accumulating their product in the corresponding position `w[i + j]`. Finally, the program prints the resulting array and releases the allocated memory.

**Potential Applications:**  
This implementation is a clear demonstration of array operations and memory management in C. Convolution is widely used in areas such as signal processing, image processing, and numerical analysis, making this project a practical reference for understanding foundational computational techniques.

---

 ### `fast_power_calculation.c`

**Objective:**  
This program efficiently calculates the power of a number using exponentiation by squaring. It demonstrates how to optimize power computation, reducing the time complexity compared to naive iterative or recursive methods.

**Concepts Applied:**  
- Exponentiation by squaring algorithm  
- Iterative approach to recursion-like logic  
- Conditional statements and arithmetic operations  
- Efficient problem-solving and algorithm optimization  

**Description:**  
The program reads a floating-point base `b` and an integer exponent `n`. The `power` function computes `b^n` using exponentiation by squaring: it iteratively multiplies the result by the current base when the least significant bit of the exponent is 1, then squares the base and halves the exponent until it reaches zero. This method significantly reduces the number of multiplications compared to naive approaches. The result is printed with three decimal places.

**Potential Applications:**  
This technique is widely used in algorithms where large powers need to be computed efficiently, such as cryptography, numerical methods, and competitive programming. The implementation also serves as a reference for applying iterative solutions to traditionally recursive problems.

---

### `insert_and_sort_digit.c`

**Objective:**  
This program inserts a single-digit number into a given positive integer and reorders the resulting number in descending order. It demonstrates digit manipulation, array-based frequency counting, and algorithmic thinking in C.

**Concepts Applied:**  
- Integer and digit manipulation  
- Frequency counting for sorting  
- Conditional logic and iterative processing  
- Problem-solving with number decomposition  

**Description:**  
The program reads a positive integer `a` and a digit `x`. It first inserts `x` into the appropriate position within `a` to maintain ascending order of digits during insertion. Then, it counts the frequency of each digit in the resulting number and reconstructs a new integer with digits sorted in descending order. The final result is printed to the user.

**Potential Applications:**  
This project illustrates practical techniques for digit-level operations and sorting without using arrays for the whole number. It is useful for understanding low-level number manipulation and algorithmic approaches to arranging numeric data efficiently.

---
 
### `recursive_fast_power.c`

**Objective:**  
This program calculates the power of a number using a recursive implementation of the exponentiation by squaring algorithm. It demonstrates efficient recursive problem-solving and optimized computation of powers in C.

**Concepts Applied:**  
- Recursion and base case handling  
- Exponentiation by squaring algorithm  
- Conditional logic for even and odd exponents  
- Efficient computational techniques  

**Description:**  
The program reads a floating-point base `b` and an integer exponent `n`. The recursive `power` function computes `b^n` by dividing the exponent in half at each step. If the exponent is zero, the function returns 1. If the exponent is even, it returns the square of the recursive call for `n/2`; if odd, it multiplies the base by the square of the recursive call. The result is printed with three decimal places.

**Potential Applications:**  
This implementation is ideal for learning recursive approaches to algorithm optimization and serves as a reference for efficient power calculations in numerical computations, cryptography, and algorithm design.

---

### `reverse_substring_between_stars.c`

**Objective:**  
This program reverses the substring located between two asterisk (`*`) characters within a given string. It demonstrates string manipulation, indexing, and conditional logic in C.

**Concepts Applied:**  
- Character arrays and string handling  
- Indexing and position tracking  
- Substring extraction and reversal  
- Input validation and error handling  

**Description:**  
The program reads a string of up to 50 characters and identifies the positions of exactly two `*` characters. If the required two asterisks are not present, an error message is displayed. It then constructs a new string by copying characters before the first `*`, reversing the characters between the two `*`, and copying characters after the second `*`. The resulting string is printed to the user.

**Potential Applications:**  
This project illustrates practical techniques for manipulating substrings within a string. It is useful for learning low-level string operations, index management, and input validation in C programming.

 ---
 
### `search_number_in_matrix.c`

**Objective:**  
This program searches for a specific number in a two-dimensional matrix of integers. It demonstrates array handling, iteration through multidimensional structures, and conditional logic in C.

**Concepts Applied:**  
- Multidimensional arrays  
- Nested loops for matrix traversal  
- Conditional statements and early termination  
- Input validation and user interaction  

**Description:**  
The program reads two integers `m` and `n` representing the dimensions of the matrix, followed by the elements of the matrix. It then reads the target number `x`. Using nested loops, it traverses the matrix row by row and column by column, searching for `x`. If found, the program prints the 1-based row and column indices; otherwise, it prints a message indicating the number is not present and outputs `-1`.

**Potential Applications:**  
This project provides a practical example of working with matrices in C and implementing efficient search logic. It can serve as a reference for basic matrix operations, multidimensional array traversal, and problem-solving involving structured data.
  

## Notes

This repository reflects my learning process in C programming and aims to provide a practical reference for anyone revisiting the fundamentals.  

*Authored by Yamila Montilla with dedication and curiosity.*  
