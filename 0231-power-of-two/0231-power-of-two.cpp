class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        
        for(int x=0;x<=30;x++){
            int ans = pow(2,x);
        if(ans == n){
            return true;
        }
        }
        return false;
    }
};