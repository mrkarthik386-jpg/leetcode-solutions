## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum stock price seen so far. For each price, I calculate the possible profit and update the maximum profit. This ensures that the stock is bought before it is sold.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with:
- [7,1,5,3,6,4] → 5
- [7,6,4,3,1] → 0

The solution was submitted successfully on LeetCode and accepted.