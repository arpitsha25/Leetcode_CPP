class Solution {
    
    
bool isPossible(vector<int>& weights, int days , int mid)
{
    int sum=0;

        days--;
        for(int i=0; i<weights.size(); i++){
            if(weights[i] > mid)
                return false;

            if(sum+weights[i]<=mid){
                sum += weights[i];
            }else{
                sum = weights[i];
                days--;
            }
        }

        return days>=0;
}
             
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int end = accumulate(weights.begin() , weights.end(), 0);
        int start = *max_element(weights.begin() , weights.end());
        // cout<<end<<" "<<start;
        int mid = start + (end - start) / 2;
        // cout<<mid;
        int ans = -1;
        while(start <= end)
        {
            if(isPossible(weights, days, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }         
            
            mid = start + (end - start) / 2;
        }
        return ans;
        
    }
};
