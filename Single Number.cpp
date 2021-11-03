/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/problems/single-number/solution/ */
/* Try yourself once. */

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int i;
        
        for(i=0;i<nums.size()-1;i=i+2)
        {
            if(nums[i] != nums[i+1])
            {
                
                break;
            }
        }
     return nums[i];
    }
};