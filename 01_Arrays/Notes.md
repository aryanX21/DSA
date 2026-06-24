# Arrays Notes

## Data Structure

A Data Structure is a way of organizing and storing data in a computer so that it can be accessed and modified efficiently.

### Examples

* Array
* Linked List
* Stack
* Queue
* Tree
* Graph

---

## Algorithm

An Algorithm is a step-by-step procedure used to solve a problem or perform a specific task.

### Examples

* Linear Search
* Binary Search
* Bubble Sort
* Merge Sort

---

## Static Memory Allocation

Static Memory Allocation is memory that is allocated before program execution and whose size cannot be changed during runtime.

### Example

```cpp
int arr[5];
```

### Memory Location

```text
Stack Memory
```

### Characteristics

* Fixed size
* Fast access
* Cannot resize during execution

---

## Dynamic Memory Allocation

Dynamic Memory Allocation is memory that is allocated during program execution and whose size can be determined at runtime.

### Example

```cpp
int* arr = new int[5];
```

### Memory Location

```text
Heap Memory
```

### Characteristics

* Size decided at runtime
* Can allocate large memory
* Must be manually released using delete

### Deallocation

```cpp
delete[] arr;
```

---

## Array

An Array is a collection of elements of the same data type stored in contiguous memory locations.

### Syntax

```cpp
int arr[5];
```

### Initialization

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

### Accessing Elements

```cpp
cout << arr[0];
cout << arr[2];
```

### Memory Type

```text
Static Memory Allocation
```

### Memory Location

```text
Stack Memory
```

### Characteristics

* Fixed size
* Contiguous memory allocation
* Fast random access using index
* Stores same data type elements

---

## Dynamic Array

A Dynamic Array is an array whose size is determined during runtime.

### Syntax

```cpp
int* arr = new int[n];
```

### Memory Type

```text
Dynamic Memory Allocation
```

### Memory Location

```text
Heap Memory
```

### Deallocation

```cpp
delete[] arr;
```

---

## Vector

A Vector is a dynamic array provided by the C++ Standard Template Library (STL) that can automatically grow and shrink during runtime.

### Syntax

```cpp
#include <vector>

vector<int> v;
```

### Adding Elements

```cpp
v.push_back(10);
v.push_back(20);
v.push_back(30);
```

### Accessing Elements

```cpp
cout << v[0];
cout << v[1];
```

### Common Functions

```cpp
v.push_back(x);
v.pop_back();
v.size();
v.front();
v.back();
```

### Memory Type

```text
Dynamic Memory Allocation
```

### Memory Location

```text
Heap Memory
```

### Advantages

* Dynamic size
* Automatic memory management
* Easy insertion and deletion
* Built-in functions available

---

## Quick Revision

| Structure                   | Memory Type      | Memory Location |
| --------------------------- | ---------------- | --------------- |
| `int arr[5]`                | Static           | Stack           |
| `int* arr = new int[5]`     | Dynamic          | Heap            |
| `vector<int> v`             | Dynamic          | Heap            |
| Local Variables             | Static/Automatic | Stack           |
| Objects created using `new` | Dynamic          | Heap            |



## Problem - 1. Single Number

Given a vector where every element appears twice except one, find the unique element.

Approach:
Use the XOR operator. Duplicate elements cancel each other out because a ^ a = 0. After XORing all elements, the remaining value is the unique element.


## 2. Maximum Subarray Sum (Brute Force)

### Question

Find the maximum sum among all possible subarrays.

### Approach

Generate all possible subarrays and calculate their sums.

### Time Complexity

```text
O(n³)
```

### Space Complexity

```text
O(1)
```

---

## 3. Maximum Subarray Sum (Optimized)

### Question

Find the maximum sum among all possible subarrays.

### Approach

Instead of recalculating every subarray sum, keep extending the current sum while moving the end pointer.

### Time Complexity

```text
O(n²)
```

### Space Complexity

```text
O(1)
```

---

## 4. Kadane's Algorithm

### Question

Find the maximum sum among all possible subarrays.

### Approach

Maintain a running sum.

* Add the current element to the running sum.
* Update maximum sum.
* If running sum becomes negative, reset it to 0.

### Logic

```text
Negative sum can never contribute to a larger future subarray.
```

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

## 5. Pair Sum (Brute Force)

### Question

Given a vector and a target value, find a pair whose sum equals the target.

### Approach

Check every possible pair using nested loops.

### Example

```text
Vector = [2, 7, 11, 15]
Target = 9

Pair = (2, 7)
```

### Time Complexity

```text
O(n²)
```

### Space Complexity

```text
O(1)
```

---

## 6. Pair Sum (Two Pointer Approach)

### Question

Given a sorted vector and a target value, find a pair whose sum equals the target.

### Approach

Use two pointers:

* Left pointer at the beginning.
* Right pointer at the end.

### Logic

```text
If sum > target → move right pointer left.
If sum < target → move left pointer right.
If sum == target → pair found.
```

### Note

```text
This approach works only on sorted arrays/vectors.
```

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

# Complexity Comparison

| Problem              | Approach           | Time Complexity | Space Complexity |
| -------------------- | ------------------ | --------------- | ---------------- |
| Maximum Subarray Sum | Brute Force        | O(n³)           | O(1)             |
| Maximum Subarray Sum | Optimized          | O(n²)           | O(1)             |
| Maximum Subarray Sum | Kadane's Algorithm | O(n)            | O(1)             |
| Pair Sum             | Brute Force        | O(n²)           | O(1)             |
| Pair Sum             | Two Pointer        | O(n)            | O(1)             |

---

## Key Takeaways

* Kadane's Algorithm is the optimal solution for Maximum Subarray Sum.
* Two Pointer Technique is the optimal solution for Pair Sum on sorted arrays.
* Always try to reduce nested loops to improve time complexity.