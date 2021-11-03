/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/ */
/* Try yourself once. */


class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        
        int x;
        if(nums.size() == 1){}
          
        else
        {
            if(k % nums.size()  == 0){}
            else
            {
                 
                 x = k % nums.size();
                 reverse(nums,0,nums.size());

                 reverse(nums,x,nums.size());

                 reverse(nums,0,x);
   
            }
            
         }
    }

void reverse(vector<int>& nums,int start,int end)
{
    int j=end-1;
    for(int i=start;i<end;i++)
    {
        if(j == i || j < i)
        {
            break;
        }
        else
        {
            swap(nums[i],nums[j]);
            cout<<"Swapping "<< nums[i] <<" "<<nums[j] <<endl;
            j--;
        }
    }
}


};
