# 3312. Sorted GCD Pair Queries

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-18T19:41:02.982Z
- Preptin problem: https://preptin.ai/problems/sorted-gcd-pair-queries
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a frequency array to count how many times each divisor appears in the nums array, then uses inclusion-exclusion (Mobius inversion principle) to compute the number of pairs with each gcd value. It constructs a prefix sum array of pairs sorted by gcd and uses binary search to answer gcd queries efficiently.

## Complexity

- Time: O(n * sqrt(max(nums)) + max(nums) * log(max(nums)) + q * log(max(nums))) where n is size of nums and q is number of queries.
- Space: O(max(nums)) for frequency arrays and prefix sums.

## Signals

- Binary Search
- Prefix Sum
- Mathematics
- Number Theory
- Mobius Inversion
- Divisor Counting
- Greatest Common Divisor (GCD)
- Counting Pairs
- Divisor Frequency
- Inclusion-Exclusion Principle
- Binary Search on Prefix Sums
