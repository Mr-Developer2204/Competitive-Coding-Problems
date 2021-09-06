#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;int exe=0;
        int j=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            
            while((nums[i]==nums[j] && j<nums.size())||nums[i]>nums[j])
            {
                j++;
            }
            if(nums[i+1]!=nums[j] && j<nums.size())
            {
                int temp = nums[j];
                nums[j] = nums[i+1];
                nums[i+1] = temp;
                exe++;
            }
        }
        return exe;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums = {1,1,2};
    int x;
    x= s.removeDuplicates(nums);
    cout<<x;
}