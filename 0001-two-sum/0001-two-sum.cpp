class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> values;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target && i<j)
                {
                    values.push_back(i);
                    values.push_back(j);
                    // cout<<"["<<i<<","<<j<<"]";
                }
            }
        }
        return values;
    }
};