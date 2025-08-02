class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        for(int i = 0 ; i < n ; ++i)
            mp[s[i]] = i;
        int lst = mp[s[0]] , cur = 1;
        vector<int>ans;
        for(int i = 1 ; i < n ; ++i)
        {
            if(lst < i)
            {
                ans.push_back(cur);
                cur = 1;
                lst = mp[s[i]];
            }
            else lst = max(lst,mp[s[i]]) , cur++;
        }
        ans.push_back(cur);
        return ans;
    }
};
