class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0;
        int et = nums.size() - 1;
        
         int s = 0;
        int e = nums.size() - 1;
       
        vector<int> ans ;
        int left = -1;
        int right = -1;
        
        // first occurence
        
        while(s <= e)
        {
            int m = s +  (e - s) / 2;
            
            if(nums[m] == target)
            {
                left = m;
                e = m - 1;
            }
            
            else if(target > nums[m])
            {
                s = m + 1;
            }
            else if(target < nums[m])
            {
                e = m-1;
            }
        }
        
        // last occurence
         while(st <= et)
        {
            int mt = st +  (et - st) / 2;
            
            if(nums[mt] == target)
            {
                right = mt;
                st = mt + 1;
            }
            
            else if(target > nums[mt])
            {
                st = mt + 1;
            }
            else if(target < nums[mt])
            {
                et = mt-1;
            }
        }
        // cout<<left<< " "<<right;
        ans.push_back(left);
        ans.push_back(right);
        
        return ans;
    }
};