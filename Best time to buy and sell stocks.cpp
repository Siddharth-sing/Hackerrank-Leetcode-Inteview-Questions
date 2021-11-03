/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/ */

/* Here I have used "Peak Valley Approach Algorithm." */

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int valley = prices[0];
        int peak = prices[0];
        int maxprofit = 0;
        int i=0;
        while(i < prices.size() - 1)
        {
            while(i < prices.size() - 1 && prices[i] >= prices[i+1] )
            { 
                 i++;
            }
            valley = prices[i]; 
            
            while(i < prices.size() - 1 && prices[i] <= prices[i+1] )
            { 
                 i++;
            }
            peak = prices[i];
         
           maxprofit = maxprofit + peak -valley;
         }
        return maxprofit;
       }
};