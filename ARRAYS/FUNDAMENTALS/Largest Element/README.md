# Find the Largest Element in an Array

---

## 📝 Problem Statement

Given an array of integers `nums`, return the value of the **largest element** in the array.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [3, 3, 6, 1]
Output: 6
```

**Explanation:** The largest element in the array is `6`.

---

### Example 2

```text
Input:  nums = [3, 3, 0, 99, -40]
Output: 99
```

**Explanation:** The largest element in the array is `99`.

---

### Example 3

```text
Input:  nums = [-4, -3, 0, 1, -8]
Output: 1
```

**Explanation:** The largest element in the array is `1`.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `nums` may contain duplicate elements.

---

## 💡 Approach

Traverse the array while keeping track of the largest element seen so far. Update the maximum whenever a larger element is found.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
