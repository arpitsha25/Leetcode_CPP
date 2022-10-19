class Solution {
public:
    int findMin(vector<int>& nums) {
        
        // set<int> s(nums.begin() , nums.end());
        // return (*(s.begin()));
        
        
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + (high - low) / 2;
        
        while(low < high)
        {
            if(nums[mid] < nums[high])
            {
                high = mid;
            }
            
            else if(nums[mid] > nums[high])
            {
                low = mid+1;
            }
            
            else
            {
                high --;
            }
            
            mid = low + (high - low) / 2;
        }
        
        return nums[low];
    }
};