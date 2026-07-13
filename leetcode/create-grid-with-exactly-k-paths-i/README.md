# 3988. Create Grid With Exactly K Paths I

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-13T18:35:43.351Z
- Preptin problem: https://preptin.ai/problems/create-grid-with-exactly-k-paths-i
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution constructs a grid of characters based on input parameters m, n, and k. It returns a grid with '.' and '#' characters according to specified rules, adjusting certain positions based on the value of k, while handling edge cases for small grids.

## Complexity

- Time: O(m*n) due to grid initialization and iteration over rows and columns for boundary modification
- Space: O(m*n) as it creates a 2D grid with m rows and n columns

## Signals

- grid construction
- conditional logic
- boundary handling
- 2D arrays
- string manipulation
- conditional branching
