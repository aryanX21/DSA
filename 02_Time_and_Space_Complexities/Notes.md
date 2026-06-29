# Time and Space Complexity

## What is Time Complexity?

**Time Complexity** is a measure of how the execution time of an algorithm grows as the input size (`n`) increases.

It does **not** represent the actual time taken (in seconds). Instead, it describes how efficiently an algorithm performs for different input sizes.

### Example

```cpp
for(int i = 0; i < n; i++){
    cout << i;
}
```

The loop executes `n` times.

**Time Complexity:** `O(n)`

---

## What is Space Complexity?

**Space Complexity** is the amount of extra memory an algorithm requires while executing, excluding the input data.

It measures how memory usage grows as the input size (`n`) increases.

### Example

```cpp
int sum = 0;
```

Only one variable is used regardless of input size.

**Space Complexity:** `O(1)`

Another example:

```cpp
vector<int> temp(n);
```

An additional vector of size `n` is created.

**Space Complexity:** `O(n)`

---

## Why Complexity Analysis is Important?

Complexity Analysis helps us compare different algorithms and choose the most efficient one.

### Importance

- Predicts how an algorithm performs for large inputs.
- Helps compare multiple solutions to the same problem.
- Improves code efficiency.
- Reduces execution time.
- Reduces memory usage.
- Essential for Competitive Programming, DSA, and Technical Interviews.
- Helps build scalable software that works efficiently even with millions of inputs.

### Example

Suppose we have two algorithms:

- Algorithm A → `O(n²)`
- Algorithm B → `O(n)`

For small inputs, both may perform similarly.

For very large inputs, **Algorithm B** will be significantly faster and more efficient.

---

> **Key Point:**  
> A good algorithm minimizes both **execution time** and **memory usage**.


# Big O Notation

## What is Big O Notation?

**Big O Notation** is a mathematical way of describing the **time complexity** or **space complexity** of an algorithm.

It tells us how the performance of an algorithm changes as the input size (`n`) increases.

Big O focuses on the **worst-case performance** of an algorithm.

---

# O(1) — Constant Time

## Definition

An algorithm has **O(1)** time complexity if the number of operations remains **constant**, regardless of the input size.

Whether there are 10 elements or 1,000,000 elements, the algorithm performs the same number of operations.

### Example

```cpp
int first = arr[0];
```

Accessing the first element always takes one operation.

### Characteristics

* Fastest time complexity.
* Does not depend on input size.
* Constant execution time.

---

# O(n) — Linear Time

## Definition

An algorithm has **O(n)** time complexity if the number of operations increases **linearly** with the input size.

If the input size doubles, the number of operations also approximately doubles.

### Example

```cpp
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
```

The loop runs exactly `n` times.

### Characteristics

* Performance depends directly on input size.
* Very common in searching and traversing arrays or vectors.
* Efficient for most practical problems.

---

# Difference Between O(1) and O(n)

| O(1)                      | O(n)                         |
| ------------------------- | ---------------------------- |
| Constant Time             | Linear Time                  |
| Independent of input size | Depends on input size        |
| Same number of operations | Operations increase with `n` |
| Faster                    | Slower than O(1)             |

---

# Examples

| Operation                     | Time Complexity |
| ----------------------------- | --------------- |
| Access first element of array | O(1)            |
| Access last element by index  | O(1)            |
| Traverse an array             | O(n)            |
| Find maximum element          | O(n)            |
| Calculate sum of all elements | O(n)            |

---

## Key Points

* **Big O Notation** measures the efficiency of an algorithm.
* **O(1)** means constant execution time.
* **O(n)** means execution time grows linearly with input size.
* Lower time complexity generally indicates a more efficient algorithm.
