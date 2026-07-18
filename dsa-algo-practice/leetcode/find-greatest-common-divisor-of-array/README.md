# Find Greatest Common Divisor Of Array

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-18T06:29:50.591Z
- Preptin problem: https://preptin.ai/problems/find-greatest-common-divisor-of-array
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution calculates the greatest common divisor (GCD) of the smallest and largest elements in the input array. It sorts the array, then uses the Euclidean algorithm recursively to compute the GCD of the two extreme values.

## Complexity

- Time: O(n log n) due to sorting the array of n elements; the GCD computation is O(log min(a,b)) which is negligible in comparison.
- Space: O(1) if considering in-place sort, otherwise O(n) depending on sorting algorithm implementation.

## Signals

- Mathematical Algorithms
- Greatest Common Divisor
- Sorting
- Recursion
- Euclidean Algorithm
