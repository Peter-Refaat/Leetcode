class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
       string ret;
       int len = INT_MAX;
       for(auto& it : strs)
        len = min(len,(int)it.size());
        int l = 0 , r = len;
        while(l <= r)
        {
            int m = l+r>>1;
            bool can = true;
            string cur;
            for(auto& it : strs)
            {
                if(cur.empty())
                    cur = it.substr(0,m);
                else 
                {
                    can &= (cur == it.substr(0,m));
                    if(!can)
                        break;
                }
            }
            if(!can)
                r = m-1;
            else l = m+1 ,  ret = cur;
        }
        return ret;
    }
    
};
