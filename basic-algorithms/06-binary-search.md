# Binary Search

## Problem

Given a sorted array of integers, search for a target value and return its index. If the target is not found, return `-1`.

## Difficulty

Easy–Medium

## LeetCode

https://leetcode.com/problems/binary-search/

## Approach

Use binary search on the sorted array. Maintain `left` and `right` pointers and check the middle element. If the middle element is smaller than the target, search the right half; otherwise, search the left half.

## Complexity

* **Time:** O(log n)
* **Space:** O(1)

## Test Cases

### Test Case 1

Input:

```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9
```

Output:

```text
4
```

### Test Case 2

Input:

```text
nums = [-1, 0, 3, 5, 9, 12]
target = 2
```

Output:

```text
-1
```

## Notes

* The array must be sorted for binary search to work correctly.
* If the target is not present, return `-1`.
* Tested locally before submitting to LeetCode.
