/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int start = 0;
        int end = mountainArr.length()-1;
        
        // finding peak of mouhtain
        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1))
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }   
        }
        
        
        int peak  = start;
        
        // finding taget in left slope of mountain
        int ls = 0;
        int le = peak;
        // int lans = -1;
         int lm = ls + (le - ls)/2;
        
        while(ls <= le)
        {
           
            if(mountainArr.get(lm) == target)
            {
                cout<<lm;
                return lm;
            }
            
            else if(target > mountainArr.get(lm))
            {
                ls = lm + 1;
            }
            else
            {
                le = lm - 1;
            }   
            lm = ls + (le - ls)/2;
        }
        
        // finding target in right slope of mountain
        // cout<<peak;
        int rs = peak;
        int re =  mountainArr.length()-1;
        // int rans = -1;
        int rm = rs + (re - rs)/2;
        
        while(rs <= re)
        {
            
            if(mountainArr.get(rm) == target)
            {
                cout<<rm;
                return rm;
            }
            
            else if(target < mountainArr.get(rm))
            {
                rs = rm + 1;
            }
            else
            {
                re = rm - 1;
            }   
            rm = rs + (re - rs)/2;
        }
       
        return -1;
    }
};