/*
 * Platform: TakeUForward
 * Problem: Selection Sort
 * URL: https://takeuforward.org/practice/dsa/selection-sort
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: 0.015 ms
 * Memory: N/A
 * Synced: 2026-10-23T13:38:11.415Z
 */

for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
