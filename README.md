
---

# Binary Search Implementation

This project demonstrates a **Binary Search Algorithm** implemented in C++. The program searches for an element in a sorted array using the binary search technique, which divides the array in half to find the target efficiently.

## Files

### 1. `binarysearch.cpp`
This source file contains the implementation of the binary search algorithm. It performs the following tasks:
- Takes a sorted array of integers.
- Searches for a target value.
- Returns the index of the target if found, or indicates that the value is not present.

## How to Compile

To compile the project, use the following command in your terminal:

```bash
g++ -o binary_search binarysearch.cpp
```

This will create an executable file named `binary_search`.

## How to Run

After compiling, run the program with:

```bash
./binary_search
```

The program will:
1. Prompt the user to enter the size of the array and the elements of the array.
2. Prompt the user to enter the target value to search for.
3. Output the index of the target value in the array or indicate that it was not found.

### Example Output:

```
Enter the number of elements: 5
Enter 5 sorted elements: 1 2 3 4 5
Enter the number to search: 3
3 found at index 2
```

## Dependencies

- A C++ compiler (e.g., `g++`).
- The input array should be pre-sorted for binary search to work correctly.

---
