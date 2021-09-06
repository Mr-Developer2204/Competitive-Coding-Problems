#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
            for(int& it:nums)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return i + 1;

        // int k=0;int exe=0;
        // int j=1;
        // for(int i=0;i<nums.size()-1;i++)
        // {

        //     while((nums[i]==nums[j] && j<nums.size())||nums[i]>nums[j])
        //     {
        //         j++;
        //     }
        //     if(nums[i+1]!=nums[j] && j<nums.size())
        //     {
        //         int temp = nums[j];
        //         nums[j] = nums[i+1];
        //         nums[i+1] = temp;
        //         exe++;
        //     }
        //     for(int& it:nums)
        //     {
        //         cout<<it<<" ";
        //     }
        //     cout<<endl;
        // }
        // return exe + 1;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4};
    int x = s.removeDuplicates(nums);
    cout << x;
    return 0;
}