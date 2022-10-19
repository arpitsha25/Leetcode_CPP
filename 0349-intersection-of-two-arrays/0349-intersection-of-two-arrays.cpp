class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> intersect;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i] == nums2[j])
                {
                    intersect.push_back(nums1[i]);
                    nums1[i] = -1;
                    nums2[j] = -2;
                    break;
                }
            }
        }
        
        int size2 = intersect.size();
        sort(intersect.begin(),intersect.end());
        
        for(int i=0;i<size2;i++)
        {
            int cnt = count(intersect.begin(),intersect.end(),intersect[i]);
            if(cnt > 1)
            {
                intersect.erase(intersect.begin()+i , intersect.begin()+i+cnt-1);
            }
        }
        
        
        return intersect;
        
    }
};