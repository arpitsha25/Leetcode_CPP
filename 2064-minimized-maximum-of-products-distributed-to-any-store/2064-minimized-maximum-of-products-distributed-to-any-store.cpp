class Solution {
public:
    bool isOK(int n, long long int mid, vector<int>& q){
        int stores=0;
        for(int i=0;i<q.size();i++){
            if(q[i]<=mid){
                stores++;
            }
            else{
                int items=q[i];
                stores+=items/mid;
                int remaining=items%mid;
                if(remaining!=0 && remaining<=mid){
                    stores++;
                }
            }
            if(stores>n){  // stores already supplied, some supplies still remain so false
                return false;
            }
        }
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& q) {
        long long int low=1;
        long long int high=accumulate(q.begin(),q.end(),0LL);
        long long int res=INT_MAX;
        while(low<=high){
            long long int mid=(low+high)/2;
            if(isOK(n,mid,q)==true){
                res=mid;
                high=mid-1;  // minimise the search space
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};