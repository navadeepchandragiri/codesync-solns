/*
 * Platform: TakeUForward
 * Problem: Reverse a String II
 * URL: https://takeuforward.org/practice/dsa/reverse-a-string-ii
 * Language: C++
 * Difficulty: Medium
 * Topics: Prep, Additionals, My Spaces, Dashboard, Prep Hub, DSA, SQL, Quantitative
 * Runtime: 0.019 ms
 * Memory: N/A
 * Synced: 2026-10-09T21:45:16.059Z
 */

class Solution{ 
    public:     
        void reverseString(vector<char>& s){
            //your code goes here
            int left=0;
            int right=s.size() - 1;
            
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
