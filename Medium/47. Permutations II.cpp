class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        do {
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        ans.resize(distance(ans.begin(),unique(ans.begin(),ans.end())));
        return ans;
    }
};
