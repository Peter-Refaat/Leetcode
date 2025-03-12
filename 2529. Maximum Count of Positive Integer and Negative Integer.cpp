class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p = 0 , n = 0;
        for(auto& it : nums)
            p += it > 0 , n += it < 0;
        return max(p,n);
    }
};
