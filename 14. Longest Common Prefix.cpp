class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
       map<string,int>mp;
       for(auto& it : strs)
       {
            string s;
            for(auto& itt : it)
            {
                s+=itt;
                mp[s]++;
            }
       }
        int maxi = -1 , len = 0;
        string ans;
        for(auto& [s,cnt] : mp)
        {
            if(cnt >= maxi and cnt == strs.size() and s.size() > len)
                maxi=cnt , ans = s , len = s.size();    
        }
        return ans;
    }
    
};
