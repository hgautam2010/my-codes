# All Paths From Source To Target

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-16T11:09:40.256Z
- Preptin problem: https://preptin.ai/problems/all-paths-from-source-to-target
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

Depth-first search (DFS) is used to explore all paths from the source node (0) to the target node (last index) in a directed acyclic graph represented as adjacency lists. The current path is tracked using a stack (sf), and valid paths are recorded in the result vector (res).

## Complexity

- Time: O(2^N * N) where N is the number of nodes, due to potentially exponential number of paths and copying of paths.
- Space: O(N^2) for the recursion stack and storing all paths, where paths can be up to length N and there may be exponentially many paths.

## Signals

- BFS / DFS
- Backtracking Search
- All Paths in DAG
- Graphs
- Backtracking
- DFS
- Paths Enumeration
- Adjacency List
