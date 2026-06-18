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



## Problem - Single Number

Given a vector where every element appears twice except one, find the unique element.

Approach:
Use the XOR operator. Duplicate elements cancel each other out because a ^ a = 0. After XORing all elements, the remaining value is the unique element.
