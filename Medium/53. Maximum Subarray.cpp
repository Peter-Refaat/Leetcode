class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int neg = 0;
        for(auto& it : nums)
            neg += (it < 0);
        if(neg == nums.size())
            return *max_element(nums.begin(),nums.end());
        int mx = 0 , cur = 0;
        for(auto& it : nums)
        {
            cur += it;
            if(cur < 0)
                cur = 0;
            mx = max(mx,cur);
        }
        return mx;
    }
};
