# Find the Second Largest Element in an Array

---

## 📝 Problem Statement

Given an array of integers `nums`, return the **second-largest element** in the array. If the second-largest element does not exist, return `-1`.

---

## 📌 Examples

### Example 1

```text
Input:  nums = [8, 8, 7, 6, 5]
Output: 7
```

**Explanation:** The largest element is `8`, and the second-largest distinct element is `7`.

---

### Example 2

```text
Input:  nums = [10, 10, 10, 10, 10]
Output: -1
```

**Explanation:** All elements are the same, so there is no second-largest element.

---

### Example 3

```text
Input:  nums = [7, 7, 2, 2, 10, 10, 10]
Output: 7
```

**Explanation:** The largest element is `10`, and the second-largest distinct element is `7`.

---

## 📋 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `nums` may contain duplicate elements.

---

## 💡 Approach

Traverse the array while maintaining the largest and second-largest distinct values. Update them whenever a larger element is encountered, ensuring duplicate values are ignored.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
