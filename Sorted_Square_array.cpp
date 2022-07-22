#include<iostream>
#include<vector>
using namespace::std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int first = 0;
        int last = nums.size()-1;
        vector<int> v(5);
        int newIndex = nums.size()-1;

        while(first<=last){
            int fsq = nums[first]*nums[first];
            int lsq = nums[last]*nums[last];

            if(fsq>lsq){
                v[newIndex] = fsq;
                newIndex--;
                first++ ;
            }else if(lsq>fsq){
                v[newIndex] = lsq;
                newIndex--;
                last--;
            }else{
                v[newIndex] = fsq;
                v[--newIndex] = lsq;
                newIndex--;
                first++;
                last--;
            }
        }
    return v;
    }
};
int main(){
   Solution S;
   vector<int> nums{-7,-3,2,3,11};
   vector<int> vans = S.sortedSquares(nums);
   for(int i=0;i<vans.size();i++){
    cout<<vans[i]<<" ";
   }
   cout<<endl<<"Code Ends"<<endl;
   return 0;
}
