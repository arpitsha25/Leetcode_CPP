class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int size = nums.size();
        int i = 0;
        while(i<size)
        {
            int cnt = count(nums.begin() , nums.end() , nums[i]);
            
                if(cnt > size / 3)
                {
                    
                    ans.push_back(nums[i]);
                    replace(nums.begin() ,nums.end() , nums[i] , -1);
                }
            i+=cnt;
        }
        return ans;
    }
};