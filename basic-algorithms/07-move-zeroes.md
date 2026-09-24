# Move Zeroes

## Problem

Given an integer array, move all `0`s to the end while maintaining the relative order of the non-zero elements.

## Difficulty

Easy

## LeetCode

https://leetcode.com/problems/move-zeroes/

## Approach

Use an index to place the non-zero elements at the beginning of the array. After all non-zero elements are placed, fill the remaining positions with `0`. This keeps the relative order of the non-zero elements.

## Complexity

* **Time:** O(n)
* **Space:** O(1)

## Test Cases

### Test Case 1

Input:

```text
[0, 1, 0, 3, 12]
```

Output:

```text
[1, 3, 12, 0, 0]
```

### Test Case 2

Input:

```text
[0]
```

Output:

```text
[0]
```

## Notes

* The relative order of non-zero elements is preserved.
* The solution modifies the array in-place.
* Tested locally before submitting to LeetCode.
