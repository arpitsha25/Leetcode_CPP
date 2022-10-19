class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            int cnt = count(nums.begin(),nums.end(),nums[i]);
            if(cnt > 1)
            {
                nums.erase(nums.begin()+i , nums.begin()+i+cnt-1);
            }
        }
        
        return nums.size();
    }
};