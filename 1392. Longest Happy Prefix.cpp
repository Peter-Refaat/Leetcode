class Solution {
public:
    string longestPrefix(string s) {
        int i = 1 , j = 0;
        int n = s.size();
        vector<int>lps(n);
        while(i < n)
        {
            if(s[i] == s[j])
            {
                lps[i++] = ++j;
            }
            else if(j)
            {
                j = lps[j-1];
            }
            else
            {
                lps[i++] = 0;
            }
        }
        return s.substr(0,lps[n-1]);
    }
};
