# 3336. Find the Number of Subsequences With Equal GCD

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-15T11:55:29.075Z
- Preptin problem: https://preptin.ai/problems/find-the-number-of-subsequences-with-equal-gcd
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a top-down dynamic programming approach with memoization to count subsequence pairs where the gcd of elements in both subsequences are equal and non-zero. It recursively explores three possibilities at each index: skipping the element, including it in the first subsequence, and including it in the second subsequence, while caching results to avoid recomputation.

## Complexity

- Time: O(n * 201 * 201), where n is the length of the input array and 201 is the upper bound for gcd values considered.
- Space: O(n * 201 * 201) for the 3D DP memoization array used to store intermediate results.

## Signals

- Memoization
- Dynamic Programming
- Recursion
- GCD Computation
- Greatest Common Divisor (GCD)
- Subsequence Enumeration
- Top-Down Dynamic Programming
