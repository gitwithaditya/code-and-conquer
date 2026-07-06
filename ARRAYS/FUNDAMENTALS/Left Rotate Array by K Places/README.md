# Left Rotate Array by K Places

---

## 📝 Problem Statement

Given an integer array `nums` and a non-negative integer `k`, rotate the array to the **left** by `k` positions.

> **Note:** Modify the given array in-place. There is no need to return anything.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [1, 2, 3, 4, 5, 6], k = 2
Output: [3, 4, 5, 6, 1, 2]
```

**Explanation:** After rotating the array twice to the left, the first two elements move to the end.

---

### Example 2

```text
Input:  nums = [3, 4, 1, 5, 3, -5], k = 8
Output: [1, 5, 3, -5, 3, 4]
```

**Explanation:** Since the array length is `6`, rotating by `8` positions is equivalent to rotating by `2` positions.

---

### Example 3

```text
Input:  nums = [1, 2, 3, 4, 5], k = 4
Output: [5, 1, 2, 3, 4]
```

**Explanation:** After four left rotations, the array becomes `[5, 1, 2, 3, 4]`.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `0 <= k <= 10⁵`

---

## 💡 Approach

First, reduce the number of rotations by taking `k % n`, since rotating more than the array length results in repeated cycles. Then, use the **Reversal Algorithm**:

- Reverse the first `k` elements.
- Reverse the remaining elements.
- Reverse the entire array.

This rotates the array to the left by `k` positions in-place without using any extra space.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

## 🔗 Similar LeetCode Problem

**[189. Rotate Array](https://leetcode.com/problems/rotate-array/)**

> **Note:** LeetCode 189 asks for **right rotation**, whereas this problem requires **left rotation**. The underlying reversal technique remains the same, with slight modifications.

---

⭐ Solution available in **Solution.cpp**
