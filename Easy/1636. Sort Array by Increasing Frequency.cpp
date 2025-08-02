class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(auto& it : nums)
            mp[it]++;
        map<int,set<int,greater<>>>ret;
        for(auto& [i,j] : mp)
            ret[j].insert(i);
        for(auto& [freq,l] : ret)
        {
            for(auto& it : l)
            {
                int temp = freq;
                while(temp--)
                    ans.push_back(it);
            }
        }
        return ans;
    }
};
