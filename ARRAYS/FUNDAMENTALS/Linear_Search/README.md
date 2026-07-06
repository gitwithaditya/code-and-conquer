# Linear Search

---

## 📝 Problem Statement

Given an array of integers `nums` and an integer `target`, find the **smallest index (0-based)** where the target appears in the array. If the target is not present, return `-1`.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [2, 3, 4, 5, 3], target = 3
Output: 1
```

**Explanation:** The first occurrence of `3` is at index `1`.

---

### Example 2

```text
Input:  nums = [2, -4, 4, 0, 10], target = 6
Output: -1
```

**Explanation:** The target `6` is not present in the array.

---

### Example 3

```text
Input:  nums = [1, 3, 5, -4, 1], target = 1
Output: 0
```

**Explanation:** The first occurrence of `1` is at index `0`.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `-10⁴ <= target <= 10⁴`

---

## 💡 Approach

Traverse the array from left to right. Return the index as soon as the target is found. If the target doesn't exist after checking all elements, return `-1`.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
