/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/ */
/* Try yourself once. */

/* This solution was faster than 100% submissions at that time */

/* Space Optimal, Operation Sub-Optimal Approach is applied */


class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int lastIndexNZ = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                nums[lastIndexNZ ++] = nums[i];
            }
        }
        
       for(int i=lastIndexNZ;i<nums.size();i++)
       {
           nums[i] = 0;
       }
    }
};
