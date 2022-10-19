class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // using in build-function
        // sort(nums.begin() , nums.end());
        
        // wihout using in built function
        int red = count(nums.begin() , nums.end() , 0);
        int white = count(nums.begin() , nums.end() , 1);
        int blue = count(nums.begin() , nums.end() , 2);
        
        nums.clear();
        
        for(int i = 0;i<red;i++)
        {
            nums.push_back(0);
        }
        
         for(int i = 0;i<white;i++)
        {
            nums.push_back(1);
        }
        
         for(int i = 0;i<blue;i++)
        {
            nums.push_back(2);
        }
    }
};