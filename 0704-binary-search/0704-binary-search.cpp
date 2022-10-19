class Solution {
public:
    int search(vector<int>& nums, int target) {
        int last = nums.size()-1;
        int start = 0;
        while(last >= start)
        {
        int mid = start + (last - start) / 2;
        if(nums[mid] == target)
        {
            return mid;
        }        
        else if(target < nums[mid])
        {
            last = mid - 1;
        }        
        else if(target > nums[mid])
        {
            start = mid + 1;
        }
        }                
        return -1;
    }
};