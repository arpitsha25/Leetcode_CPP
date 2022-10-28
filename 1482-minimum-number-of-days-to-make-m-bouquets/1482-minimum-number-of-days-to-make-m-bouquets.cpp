class Solution {
    
    
    bool isPossible(vector<int>& bloomDay, int m, int k , int mid)
    {
        int s = 0;
        int t = 0;
        
        for(int i = 0 ; i < bloomDay.size(); i ++)
        {
            if(bloomDay[i] <= mid)
            {
                t++;
            }
            else
            {
                if(t == k)
                {
                   s++; 
                }
                t = 0;  
            }
            
            if(t == k)
            {
                s++;
                t=0;
            }
        }
        
        
        if(s >= m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = 1;
        int end = *max_element(bloomDay.begin() , bloomDay.end());
        int mid = start + (end - start)/2; 
        int ans = -1;
        int i = 0;
        while(start <= end)
        {
            if(isPossible(bloomDay ,m, k ,mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + (end - start)/2; 
        }
        return ans;
    }
};