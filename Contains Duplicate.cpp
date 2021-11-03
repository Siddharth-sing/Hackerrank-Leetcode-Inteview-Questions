/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/ */
/* Try yourself once. */


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        vector<int> v;
        bool result = false;
        int len = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<len-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                result = true;
                break;
            }
        }
      return result;  
    }
};