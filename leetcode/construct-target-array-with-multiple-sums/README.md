# Construct Target Array With Multiple Sums

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-07T06:35:07.297Z
- Preptin problem: https://preptin.ai/problems/construct-target-array-with-multiple-sums
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a max heap (priority queue) to repeatedly replace the largest element with the difference from the sum of the rest, simulating the reverse process of constructing the target array from all ones.

## Complexity

- Time: O(n log m) where n is the size of target and m is the maximum element in target due to heap operations and reductions.
- Space: O(n) for the priority queue storing the elements.

## Signals

- heap
- greedy
- mathematical remainder
- Heaps
- Greedy
- Number Theory
- reverse engineering
