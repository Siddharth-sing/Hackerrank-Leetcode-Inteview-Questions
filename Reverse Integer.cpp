/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/ */

/* Difficulty Level : Easy*/

class Solution {
public:
    int reverse(int x)
    {
        long int finalNum=0;
        
        vector<int> v;
        
        /* Storing Each individual digit of number x in reverse order in a vector */
        while(x != 0)
        {
            v.push_back(x%10);
            x = x / 10 ;
        }
        
        int exp = v.size()-1;
        
        /* storing the number stored digit wise in vector into an int variable finalNum */
        for(int i=0;i<v.size();i++)
        {
            
            finalNum = finalNum + v[i]*pow(10,exp) ;
            exp--;
        }
        
        
        /* Checking the size of the number */

        if(finalNum >= INT_MAX || finalNum <= INT_MIN)
            return 0;
        else
            return finalNum;

      }
};