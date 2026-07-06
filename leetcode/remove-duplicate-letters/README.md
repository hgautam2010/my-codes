# 316. Remove Duplicate Letters

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-06T10:19:34.234Z
- Preptin problem: https://preptin.ai/problems/remove-duplicate-letters
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a greedy algorithm combined with a stack to remove duplicate letters from the input string such that the result is the lexicographically smallest string containing all unique letters. It records the last occurrence index of each character and ensures that characters are only added once in the correct order.

## Complexity

- Time: O(n), where n is the length of the input string, since each character is pushed and popped at most once from the stack.
- Space: O(1), using fixed-size arrays of length 26 for last occurrence and usage, and a stack that at most holds all unique characters.

## Signals

- Monotonic Stack
- Greedy
- Stack
- String Manipulation
- Stack Data Structure
- Character Frequency
- String Processing
