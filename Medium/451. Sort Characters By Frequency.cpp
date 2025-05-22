class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        map<int,set<char>,greater<int>>see;
        string ans = "";
        for(auto& it : s)mp[it]++;
        for(auto& it : mp)
        see[it.second].insert(it.first);
        for(auto& it : see)
        {
            int temp = it.first;
            for(auto& itt : it.second)
            {
                while(temp--)ans+=itt;
                temp = it.first;
            }
        }
        return ans;
    }
};
