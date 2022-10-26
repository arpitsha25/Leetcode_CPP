class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int size = nums.size();
        
        for(int i = 0;i<size ;)
        {
            int cnt = count(nums.begin() , nums.end() , nums[i]);
            
            if(cnt > size / 2)
            {
                return nums[i];
            }
            
            i+=cnt;
        }
        return 0;
    }
};