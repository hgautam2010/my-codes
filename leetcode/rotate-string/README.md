# Rotate String

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-07T11:01:33.732Z
- Preptin problem: https://preptin.ai/problems/rotate-string
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution checks if one string is a rotation of another by using the Knuth-Morris-Pratt (KMP) string matching algorithm. It constructs the LPS (Longest Prefix Suffix) array for the goal string, doubles the source string, and then searches for the goal within the doubled string using the KMP matching technique.

## Complexity

- Time: O(n)
- Space: O(n)

## Signals

- Knuth-Morris-Pratt (KMP) algorithm
- String rotation
- String matching
- String Matching
- string manipulation
- prefix function
- string concatenation
