class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        stack<char>st;
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')' and st.size())
            {
                mx = max(mx,(int)st.size());
                st.pop();
            }
            else
                continue;
        }
        return mx;
    }
};
