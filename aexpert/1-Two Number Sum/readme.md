# Two Number Sum

see: https://www.algoexpert.io/questions/Two%20Number%20Sum

Problem
- Given a list of integers and a target sum, find any pair of integers that sum up to the target

Solution
- Naive: O(n^2) time : nested loop to test all combinations
- Optimal time - O(n) time, O(n) space: use a set to store the differences with target sum
- Optimal space - O(n log n) time, O(1) space: sort the input and scan with two l/r pointers


