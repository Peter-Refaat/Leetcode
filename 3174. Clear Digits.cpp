class Solution {
public:
    string clearDigits(string s) {
        set<int>st;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] >= 'a' and s[i] <= 'z')
                st.insert(i);
        }
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(i and s[i] >= '0' and s[i] <= '9')
            {
                auto it = st.upper_bound(i);
                if(it != st.begin())
                    it--;
                if(it != st.end()){
                s[*it] = '*';
                st.erase(it);
                }
                s[i] = '*';
            }
        }
        string ans;
        for(auto& it : s)
            if(it != '*') ans += it;
        return ans;
    }
};
