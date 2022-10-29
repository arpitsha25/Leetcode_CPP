class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        for(int i=1; i<=nums.size(); i++)
        {
            if(m[i] == 2)
                ans.push_back(i);
        }
        for(int i=1; i<=nums.size(); i++)
        {
            if(m[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};