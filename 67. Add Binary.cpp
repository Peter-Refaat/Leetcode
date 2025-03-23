class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(a.size() < b.size())
            a += '0';
        while(b.size() < a.size())
            b += '0';
        int have = 0;
        string ans;
        for(int i = 0 ; i < a.size() ; ++i)
        {
            int aa = a[i] - '0' , bb = b[i] - '0';
            int sum = aa + bb + have;
            if(sum == 1)
                ans += '1' , have = 0;
            else if(sum == 0)
                ans += '0';
            else if(sum == 2)
                ans += '0' , have = 1;
            else
                ans += '1' , have = 1;
        }
        if(have)
            ans += '1';
        while(ans.size() > 1 and ans.back()=='0')
            ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
