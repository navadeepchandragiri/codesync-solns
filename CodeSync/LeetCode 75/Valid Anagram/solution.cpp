/*
 * Platform: TakeUForward
 * Problem: Valid Anagram
 * URL: https://takeuforward.org/practice/dsa/valid-anagram
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: N/A
 * Memory: N/A
 * Synced: 2026-10-13T18:20:39.983Z
 */

sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s == t;
        }
};
