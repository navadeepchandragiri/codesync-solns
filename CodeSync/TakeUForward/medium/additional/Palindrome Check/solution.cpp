/*
 * Platform: TakeUForward
 * Problem: Palindrome Check
 * URL: https://takeuforward.org/practice/dsa/palindrome-check
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: 0.024 ms
 * Memory: N/A
 * Synced: 2026-10-10T17:31:15.680Z
 */

if(s[left]!=s[right]){
                    return false;
                }
                left++;
                right--;
            }
            return true;

        }
            while(left<right){
