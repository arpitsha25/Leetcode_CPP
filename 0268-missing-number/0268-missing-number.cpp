class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int k = nums.size();
        
        if(nums.back() < k)
        {
            return nums.back() + 1;
        }
        
        else
        {
        for(int i = 0; i<k ; i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
        }
        }
        return -1;
    }
};
