# Valid Parentheses

## Problem

Given a string containing `(`, `)`, `{`, `}`, `[` and `]`, determine if the brackets are valid and correctly matched.

## Difficulty

Easy–Medium

## LeetCode

https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket is found, compare it with the top element of the stack. If the brackets do not match, return `false`. At the end, the stack must be empty for the string to be valid.

## Complexity

* **Time:** O(n)
* **Space:** O(n)

## Test Cases

### Test Case 1

Input:

```text
"()[]{}"
```

Output:

```text
true
```

### Test Case 2

Input:

```text
"(]"
```

Output:

```text
false
```

## Notes

* A stack follows the Last In, First Out (LIFO) principle.
* The solution handles different types of brackets.
* An empty stack at the end means all opening brackets were correctly matched.
* Tested locally before submitting to LeetCode.
