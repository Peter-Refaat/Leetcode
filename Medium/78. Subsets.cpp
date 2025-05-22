class Solution {
public:
    void rec(int n , vector<int>&nums , int i , vector<int>ret , set<vector<int>>&ans)
    {
        if(i == n)
            return;
        ret.push_back(nums[i]);
        ans.insert(ret);
        rec(n,nums,i+1,ret,ans);
        ret.pop_back();
        ans.insert(ret);
        rec(n,nums,i+1,ret,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>>ans;
        rec(nums.size(),nums,0,{},ans);
        vector<vector<int>>ret;
        for(auto& it : ans)
        ret.push_back(it);
        return ret;
    }
};
