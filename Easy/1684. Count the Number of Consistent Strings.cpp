class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st;
        int ret = 0;
        for(auto& it : allowed)
        {
            st.insert(it);
        }
        for(auto& it : words)
        {
            bool can = true;
            for(auto& itt : it)
            {
                if(st.find(itt) == st.end())
                {
                    can = false;
                    break;
                }
            }
            if(can)
                ret++;
        }
        return ret;
    }
};
