class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v(n);
        iota(v.begin(),v.end(),1);
        int cntr = 0;
        while(cntr < k-1 and next_permutation(v.begin(),v.end()))
            cntr++;
        string s;
        for(auto& it : v)
            s+=it+'0';
        return s;
    }
};
