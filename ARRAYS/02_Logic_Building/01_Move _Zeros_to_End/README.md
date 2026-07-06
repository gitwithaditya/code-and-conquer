# [0283. Move Zeroes](https://leetcode.com/problems/move-zeroes/)

> 📚 **Source:** LeetCode

---

## 📝 Problem Summary

Given an integer array `nums`, move all `0`s to the end while maintaining the relative order of the non-zero elements. The operation must be performed in-place.

---

## 💡 Approach

First, find the index of the **first zero** in the array. This index acts as the position where the next non-zero element should be placed.

Traverse the remaining part of the array. Whenever a non-zero element is found, swap it with the element at index `j` and increment `j`. This gradually pushes all zeroes towards the end while preserving the order of non-zero elements.

---

## ⏱️ Complexity

| Time | Space |
|:---:|:---:|
| O(n) | O(1) |

---

⭐ Solution available in **Solution.cpp**
