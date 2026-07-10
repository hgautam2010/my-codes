# 3534. Path Existence Queries in a Graph II

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-10T19:57:13.491Z
- Preptin problem: https://preptin.ai/problems/path-existence-queries-in-a-graph-ii
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution maps the original indices to a sorted array to enable range queries on values within a maximum difference constraint. It precomputes the farthest reachable indices for each position using a sliding window approach on the sorted array and uses a binary lifting/jump pointer technique to answer path existence queries efficiently.

## Complexity

- Time: O(n log n + m log n) where n is the size of nums and m is the number of queries. Sorting takes O(n log n), preprocessing the jump table takes O(n log n), and each query is answered in O(log n).
- Space: O(n log n) for the jump table and auxiliary arrays.

## Signals

- Sliding Window
- Binary Lifting
- Sorting
- Range Queries
