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

## Array

An Array is a collection of elements of the same data type stored in contiguous memory locations.

### Characteristics

* Stores multiple values of the same data type.
* Elements are stored in contiguous memory.
* Accessed using an index.
* Index starts from 0.

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

---

## Vector

A Vector is a dynamic array provided by the C++ Standard Template Library (STL) that can grow or shrink automatically during runtime.

### Advantages

* Dynamic size
* Easy insertion and deletion
* Provides useful built-in functions

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
