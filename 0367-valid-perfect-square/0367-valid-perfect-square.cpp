class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 0;
        int end = num;
        int mid = start + (end - start) / 2;
        long long sqrt = 0;
        while(start <= end)
        {
            sqrt = mid*1LL*mid;
            // cout<<sqrt;
            if(sqrt == num)
            {
                return true;
            }
            else if(sqrt < num)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
            
            mid = start + (end -start)/2;
        }
        
        
        
        return false;
        
    }
};