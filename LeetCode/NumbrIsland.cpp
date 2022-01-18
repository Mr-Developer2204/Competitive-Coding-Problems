#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

            if(nums.size()==0)
            {
                return 0;
            }
        int sum_max=nums[0];
        int sum_including_current=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            sum_including_current = max(sum_including_current+nums[i],nums[i]);
            sum_max = max(sum_max,sum_including_current);
            cout<<"Sum including: "<<sum_including_current<<endl;
            cout<<"Sum max: "<<sum_max<<endl;
        }
        return sum_max;

    }
};

int main()
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    cout<<s.maxSubArray(nums)<<endl;
}