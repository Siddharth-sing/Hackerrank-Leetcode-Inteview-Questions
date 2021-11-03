#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    double median(vector<int> nums1,vector<int> nums2)
    {

        vector<int> nums(nums1);

        vector<int>::iterator it;
        for(it=nums2.begin();it!=nums2.end();it++)
        {
            nums.push_back(*it);
        }

        sort(nums.begin(),nums.end());

       /* for(it=nums.begin();it!=nums.end();it++)
        {
            cout<<*it<<" ";
        }cout<<endl; */

        if(nums.size()%2 == 0)
        {
            int x = nums.size()/2;
            int y = x - 1;
            float res = (nums[x]+nums[y]);
            return res/2;

        }else{
            int x = nums.size()/2;
            return nums[x];
        }

    }
};

int main()
{
    Solution S;

    vector<int> v1 = {1,2,3,11,12};
    vector<int> v2 = {4,5,6,7,8,9,10};

    double res = S.median(v1,v2);
    cout<<res<<endl;
return 0;
}

