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