class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = m-1; j >=m-n ; j--)
        {
            nums1.pop_back();
        }
        
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin() , nums1.end());
        
        // for(int j=0;j<n;j++)
        // {
        //     p.push(nums2[j]);
        // }
        
    }
};