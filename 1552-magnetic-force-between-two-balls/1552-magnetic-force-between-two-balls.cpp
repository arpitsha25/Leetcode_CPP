class Solution
{
    public:

        bool find(vector<int> &arr, int m, int limit)
        {
            int l = arr[0];

            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] - l >= limit)
                {
                    m--;
                    l = arr[i];
                }
                if (m == 0) return true;
            }
            return false;
        }

    int maxDistance(vector<int> &arr, int m)
    {
        sort(arr.begin(), arr.end());
        int l = 1, r = arr.back();
        int res = -1;

        if (m == 2) return r - arr[0];

        while (l <= r)
        {
            int mid = (l + r) / 2;
           	// cout<<l<<" "<<mid<<" "<<r<<endl;
            if (find(arr, m - 1, mid))
            {
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        return res;
    }
};