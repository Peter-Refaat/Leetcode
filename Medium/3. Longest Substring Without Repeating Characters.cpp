class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
       for(int i = 0 ; i < n ; ++i)
       {
            unordered_map<char,bool>vis;
            vis[s[i]] = 1;
            int cur = 1;
            for(int j = 1 ; j < 256 and i+j < n ; ++j)
            {
                if(!vis[s[i+j]])
                    vis[s[i+j]] = 1 , cur++;
                else
                {
                    ans = max(ans,cur);
                    break;
                }
            }
            ans = max(ans,cur);
       }
       return ans;
    }
};
