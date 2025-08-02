class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int>pref(n);
        pref[0] = arr[0];
        for(int i = 1 ; i < n ; ++i)
            pref[i] = pref[i-1] ^ arr[i];
        vector<int>ans;
        for(auto& it : queries)
            ans.push_back(pref[it[1]] ^ (it[0] ? pref[it[0]-1] : 0));
        return ans;
    }
};
