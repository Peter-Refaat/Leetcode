class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        map<int,bool>mp;
        map<int,int>freq;
        int cntr = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i]==0)
            {
                mp[i] = true;
                freq[0]++;
                continue;
            }
            prod*=nums[i];
        }
        vector<int>ans(n);
        if(freq[0]==n || freq[0] > 1)return ans;
        if(mp.empty())
        {
            for(int i = 0 ; i < n ; ++i)
            {
                ans[i] = prod/nums[i];
            }
        }
        else
        {
            for(auto& it : mp)
            ans[it.first] = prod;
        }
        return ans;
    }
};
