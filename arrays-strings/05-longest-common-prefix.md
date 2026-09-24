# Longest Common Prefix

## Problem

Given an array of strings, find the longest common prefix shared by all the strings.

## Difficulty

Easy

## LeetCode

https://leetcode.com/problems/longest-common-prefix/

## Approach

1. Take the first string as the initial prefix.
2. Compare it with each remaining string.
3. Check characters one by one.
4. Keep only the characters that match.
5. If there is no common prefix, return an empty string.
6. Return the final common prefix.

## Time Complexity

O(n × m)

Where:

* `n` = number of strings
* `m` = length of the shortest string

## Space Complexity

O(1)

## Test Cases

### Test Case 1

Input:

```text
["flower", "flow", "flight"]
```

Output:

```text
fl
```

### Test Case 2

Input:

```text
["dog", "racecar", "car"]
```

Output:

```text
""
```

## Notes

* The solution works even when the strings have different lengths.
* If no common prefix exists, the result is an empty string.
* Tested locally before submitting to LeetCode.
* LeetCode submission: Accepted
