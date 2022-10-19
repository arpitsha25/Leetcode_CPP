class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long rev = 0;
        if(n>=0)
        {
        while(n!=0)
        {
            int rem = n%10;
            rev = rev*10 + rem;
            n=n/10;
        }
            if(x==rev)
        {
            return true;
        }
        else{
            return false;
        }
        }
        else{
            return false;
        }
        

        // cout<<rev;
        
        
        
    }
};