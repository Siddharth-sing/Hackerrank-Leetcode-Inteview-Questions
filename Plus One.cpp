/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/ */
/* Try yourself once. */

/* This solution was faster than 100% submissions at that time */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
       
        vector<int> result;
        bool carry = false ;
        int i;
        
        for(i=digits.size()-1;i>=0;i--)
        {
            if(digits[i] == 9)
            {
                result.insert(result.begin(),0);
                carry = true;
            }
            else
            {
                result.insert(result.begin(),digits[i] + 1);
                carry = false;
                break;
            }
        }
        
       if(carry == true) 
          {
             result.insert(result.begin(),1);
          }
       else 
          {
              for(int j=i-1;j>=0;j--)
              {
                  result.insert(result.begin(),digits[j]);
              }
          }
      return result;
      }       
};