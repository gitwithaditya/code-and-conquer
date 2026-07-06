# Left Rotate Array by One

---

## 📝 Problem Statement

Given an integer array `nums`, rotate the array to the left by **one position**.

**Note:** Modify the given array in-place. There is no need to return anything.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
```

**Explanation:** After one left rotation, the first element moves to the end of the array.

---

### Example 2

```text
Input:  nums = [-1, 0, 3, 6]
Output: [0, 3, 6, -1]
```

**Explanation:** After one left rotation, `-1` is moved to the last position.

---

### Example 3

```text
Input:  nums = [7, 6, 5, 4]
Output: [6, 5, 4, 7]
```

**Explanation:** After one left rotation, `7` is placed at the end.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`

---

## 💡 Approach

Start from the beginning of the array and repeatedly swap each element with its next element. This shifts every element one position to the left, while the first element gradually reaches the last position, resulting in a left rotation by one.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
