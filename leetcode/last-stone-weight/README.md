# Last Stone Weight

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-06T10:58:59.760Z
- Preptin problem: https://preptin.ai/problems/last-stone-weight
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a max-heap (priority queue) to repeatedly smash the two largest stones until one or none is left, simulating the process described in the problem.

## Complexity

- Time: O(n log n) due to heap operations where n is the number of stones.
- Space: O(n) for storing all stones in the priority queue.

## Signals

- greedy
- priority queue
- Greedy
- Heaps
- heap data structure
