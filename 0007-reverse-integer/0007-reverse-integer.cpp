class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        long rev = 0;
        
        while(x!=0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            if(rev > INT_MAX || rev < INT_MIN)
            {
                return 0;
            }
            x = x/10;
        }
        
        return rev;
    }
};