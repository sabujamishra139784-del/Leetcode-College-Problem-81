NAME: SABUJA MISHRA

CLASS: MCA 1(A)

Roll No: 92500584040

------------------------------------------------------------------------

LeetCode Problem 81 – Search in Rotated Sorted Array II
📌 Overview

This repository contains the solution for LeetCode Problem 81: Search in Rotated Sorted Array II.
The problem extends the classic binary search by introducing a rotated sorted array that may also contain duplicate elements, making the search more challenging.

This assignment demonstrates understanding of searching techniques, array manipulation, and optimized algorithm design.

📝 Problem Statement

Given an array of integers nums which is sorted in ascending order and then rotated at an unknown pivot, and may contain duplicates, determine whether a given target value exists in the array.
Return true if found, otherwise false.

🔍 Approach

A modified version of binary search is used:

Handle duplicate values by adjusting pointers when equality blocks decision making.

Determine which half (left or right) is properly sorted.

Narrow the search range based on the target's position relative to the sorted half.

This approach reduces unnecessary comparisons and improves efficiency over linear scanning.

⏱ Time & Space Complexity

Time Complexity: O(log n) on average, O(n) in worst-case due to duplicates

Space Complexity: O(1)


📁 Files Included

solution.cpp – Main implementation

README.md – Problem explanation & approach

Additional test cases (if added)

🧑‍🎓 Assignment Note

This project is submitted as part of the university assignment to demonstrate understanding of search algorithms and LeetCode-style problem solving.
