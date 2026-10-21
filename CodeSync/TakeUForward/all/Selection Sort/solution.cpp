/*
 * Platform: TakeUForward
 * Problem: Selection Sort
 * URL: https://takeuforward.org/practice/dsa/selection-sort
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: N/A
 * Memory: N/A
 * Synced: 2026-10-21T22:14:13.677Z
 */

public:
    vector<int> selectionSort(vector<int>& nums) {
           int n = nums.size();
for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
