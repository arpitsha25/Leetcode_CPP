class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int size = nums.size();
        
        if(nums[0] > target)
        {
            return 0;
        }
        
        else if(nums[size-1] < target)
        {
            return size;
        }
        
        else
        {
        for(int i = 0 ; i < size ; i++)
        {
            if((nums[i] < target) && (nums[i+1] >= target))
            {
                
                return i+1;
            }
        }
        }
        return 0;
    }
};