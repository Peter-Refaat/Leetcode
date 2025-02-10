#define ll long long
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<ll> pref(n+1) , suff(n+2);
        pref[0] = nums[0];
        suff[n-1] = nums[n-1];
        for(int i = 1 ; i < n ; ++i)
            pref[i] = pref[i-1] + nums[i];
        for(int i = n-2 ; i >= 0 ; --i)
            suff[i] = suff[i+1] + nums[i];
        int ans = 0;
        for(int i = 0 ; i < n-1 ; ++i)
        {
            if(pref[i] >= suff[i+1])
                ans++;
        }
        return ans;
    }
};
