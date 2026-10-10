/*
 * Platform: TakeUForward
 * Problem: Palindrome Check
 * URL: https://takeuforward.org/practice/dsa/palindrome-check
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: N/A
 * Memory: N/A
 * Synced: 2026-10-10T17:16:10.914Z
 */

while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                left++;
                right--;
            }

        }
            return true;
};
