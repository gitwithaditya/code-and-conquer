# Maximum Consecutive Ones

---

## 📝 Problem Statement

Given a binary array `nums`, return the **maximum number of consecutive `1`s** present in the array.

A binary array is an array that contains only `0`s and `1`s.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [1, 1, 0, 0, 1, 1, 1, 0]
Output: 3
```

**Explanation:** The longest sequence of consecutive `1`s is from index `4` to `6`, having a length of `3`.

---

### Example 2

```text
Input:  nums = [0, 0, 0, 0, 0, 0, 0, 0]
Output: 0
```

**Explanation:** Since there are no `1`s in the array, the answer is `0`.

---

### Example 3

```text
Input:  nums = [1, 0, 1, 1, 1, 0, 1, 1, 1]
Output: 3
```

**Explanation:** The longest sequence of consecutive `1`s has a length of `3`.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `nums[i]` is either `0` or `1`.

---

## 💡 Approach

Traverse the array while maintaining a count of consecutive `1`s. Reset the count whenever a `0` is encountered, and keep track of the maximum count throughout the traversal.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
