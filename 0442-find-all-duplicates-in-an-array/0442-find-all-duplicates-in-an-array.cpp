class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> twice;
        int i=0;
        int size = nums.size();
        
        while(i<size-1)
        {
            if(nums[i] == nums[i+1])
            {
                twice.push_back(nums[i]);
                i+=2;
            }
            else
            {
                i+=1;
            }
            
        }
        return twice;
    }
};