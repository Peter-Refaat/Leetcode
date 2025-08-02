class Solution {
public:
    bool isFascinating(int n)
    {
        int freq[11] = {};
        string f = to_string(n);
        string s = to_string(n*2);
        string t = to_string(n*3);
        string ans = f + s + t;
        for(int i = 0 ; i < size(ans) ; ++i)
        {
            freq[ans[i] - 48]++;
        }
        if(freq[0] >= 1) return false;
        for(int i = 0 ; i < 10 ; ++i)
        {
            if(freq[i] > 1) return false;
        }
        return true;
    }
};
