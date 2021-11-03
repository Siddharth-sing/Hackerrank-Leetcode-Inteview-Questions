/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/ */

/* Difficulty Level : Very Easy*/


class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int i = 0 ;
        int j = s.size() - 1;
        while(i < j)
         {
             swap(s[i],s[j]);
             i++;
             j--;
         }
    }
};