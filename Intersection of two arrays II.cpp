/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/ */


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int start = 0;
        vector<int> result;
        
             for(int i=0;i<nums1.size();i++)
             {
                 for(int j=start;j<nums2.size();j++)
                 {
                     if(nums1[i] == nums2[j])
                     {
                         result.push_back(nums1[i]);
                         start=j+1;
                         break;
                     }
                 }
             }
      return result;
    }
};