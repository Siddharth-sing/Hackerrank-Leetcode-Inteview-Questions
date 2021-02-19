/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/ */


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        
        for(int i=0;i<nums.size()-1;)
        {
           // cout<<"Inside for\n";
            //cout<<nums[i]<<endl;
            if( nums[i] == nums[i+1] )
            {

                nums.erase(nums.begin()+i+1);

            }
           else
            {
              i++;
            }
        }
       
        int len = nums.size();
     
        return len;   
    }
};