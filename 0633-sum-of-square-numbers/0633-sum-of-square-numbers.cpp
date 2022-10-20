class Solution {
public:
    bool judgeSquareSum(int c) {
      int start = 0;
        int end = c;
        int mid = start + (end - start)/2;
        
        long long p;
        int a = 0;
        while(start <= end)
        {
            p = mid*1LL*mid;
            if(p == c)
            {
                a = mid; 
                break;
            }
            else if(p < c)
            {
                a = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            
             mid = start + (end - start)/2;
        }
        
        
        // cout<<a;
        for(long long int i = 0, j = a ; i<=j ;)
        {
            if((i*1LL*i + j*1LL*j) == c)
            {
                return true;
            }
            else if((i*1LL*i + j*1LL*j) < c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};