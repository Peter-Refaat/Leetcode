class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        map<int,set<int>>mp;
        int n = nums.size();
        for(int i = 0 ; i < n ; ++i)
        {
            mp[nums[i]].insert(i);
        }
        int ans = INT_MAX;
        for(auto& it : mp[target])
        {
            ans = min(ans,abs(it-start));
        }
        return ans;
    }
};
