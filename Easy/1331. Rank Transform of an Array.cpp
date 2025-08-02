class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v = arr;
        sort(v.begin(),v.end());
        v.resize(distance(v.begin(),unique(v.begin(),v.end())));
        unordered_map<int,int>mp;
        for(int i = 0 ; i < v.size() ; ++i)
            mp[v[i]] = i+1;
        for(auto& it : arr)
            it = mp[it];
        return arr;
    }
};
