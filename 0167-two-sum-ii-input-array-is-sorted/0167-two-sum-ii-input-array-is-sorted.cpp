class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i,j;
        vector<int> v;
        for(i = 0, j = (size - 1); i < j ; )
        {
            if(numbers[i] + numbers[j] == target)
            {
                // cout<<i<<j;
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            
            else if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
            
             if(numbers[i] + numbers[j] < target)
            {
               i++;
            }
        }
        
        return v;
    }
};