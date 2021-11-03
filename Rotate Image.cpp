/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/* https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/ */

/* Basic Approach : First take transpose of the matrix than take image of the obtained matrix. */
class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix)
    {
         transpose(matrix);
         image(matrix);    
    }

   void transpose(vector<vector<int>>& matrix)
    {
           int start = 0,temp;  
           for(int i=0;i<matrix.size();i++)
              {
                 for(int j=start;j<matrix.size();j++)
                   {
                      temp = matrix[i][j] ;
                      matrix[i][j] = matrix[j][i];
                      matrix[j][i] = temp;
                   }
                start ++;
              }
     }
    void image(vector<vector<int>>& matrix)
     {
          int i,j; 
          for(int p=0;p<matrix.size();p++)
           {
               i=0;
               j=matrix.size()-1;
               while(j > i)
                {
                   swap(matrix[p][i],matrix[p][j]);
                   i++;
                   j--;
                }    
           }
           
     }
};
