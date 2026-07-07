# Repeated Substring Pattern

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-07T10:00:53.960Z
- Preptin problem: https://preptin.ai/problems/repeated-substring-pattern
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses the KMP (Knuth-Morris-Pratt) algorithm's preprocessing step to find the longest prefix which is also a suffix (LPS array) to determine if the string can be constructed by repeating a substring pattern.

## Complexity

- Time: O(n)
- Space: O(n)

## Signals

- KMP preprocessing
- string repetition detection
- String Matching
- KMP algorithm
- prefix function
- string manipulation
