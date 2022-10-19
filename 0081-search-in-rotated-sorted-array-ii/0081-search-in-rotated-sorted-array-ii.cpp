class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right)
        {
            if(nums[left] == target || nums[right] == target)
            {
                return true;
            }
            else
            {
                left ++;
                right --;
            }
        }
        return false;
    }
};