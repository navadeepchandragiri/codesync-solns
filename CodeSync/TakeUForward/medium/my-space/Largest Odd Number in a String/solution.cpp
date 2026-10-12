/*
 * Platform: TakeUForward
 * Problem: Largest Odd Number in a String
 * URL: https://takeuforward.org/practice/dsa/largest-odd-number-in-a-string
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: N/A
 * Memory: N/A
 * Synced: 2026-10-10T18:54:11.814Z
 */

int left = 0;

        while (left <= right && s[left] == '0') {
            left++;
        }

        return s.substr(left, right - left + 1);
    }
