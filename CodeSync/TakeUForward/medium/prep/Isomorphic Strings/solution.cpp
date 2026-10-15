/*
 * Platform: TakeUForward
 * Problem: Isomorphic Strings
 * URL: https://takeuforward.org/practice/dsa/isomorphic-string
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: N/A
 * Memory: N/A
 * Synced: 2026-10-12T18:10:35.644Z
 */

if(sToT[s[i]] !=-1 && sToT[s[i]] != t[i]){
        for (int i = 0; i < s.size(); i++){
                return false;
            }
            if(tToS[s[i]] !=-1 && tToS[t[i]] != s[i]){
                return false;
            }
