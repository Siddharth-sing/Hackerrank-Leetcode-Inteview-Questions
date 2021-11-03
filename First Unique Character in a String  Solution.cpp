/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/ */

/* Difficulty Level : Easy*/

class Solution {
public:
    int firstUniqChar(string s) 
    {
        bool result=false; 
        int ans=0;
        for(int i=0;i<s.size();i++)
         {
            for(int j=0;j<s.size();j++)
            {
                if(s[i]==s[j] && i!=j)
                {
                    break;
                }
                if(j==s.size()-1)
                {
                    result=true;
                    ans=i;
                    break;
                }
              
            }
            if(result==true)
              {
                  break;
              }
         }             
      if(result==true)
      {
          return ans;
      }
      else
      {
          return -1;
      }
    
    }
};