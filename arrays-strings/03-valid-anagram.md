## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I first check whether both strings have the same length. Then I sort both strings and compare them; if they are equal after sorting, the strings are anagrams.

### Complexity

- Time: O(n log n)
- Space: O(1)

### Notes

Tested locally with:
- "anagram", "nagaram" → true
- "rat", "car" → false

The solution was submitted successfully on LeetCode and accepted.