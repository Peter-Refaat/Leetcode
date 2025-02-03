class Solution {
public:
    int longestMonotonicSubarray(vector<int>& v) {
        int inc = 1 , dec = 1 , curinc = 1 , curdec = 1;
        for(int i = 1 ; i < v.size() ; ++i)
        {
            if(v[i] > v[i-1])
                curinc++;
            else
                inc = max(inc,curinc) , curinc = 1;
            if(v[i] < v[i-1])
                curdec++;
            else
                dec = max(dec,curdec) , curdec = 1;
        }
        return max({inc,dec,curinc,curdec});
    }
};
