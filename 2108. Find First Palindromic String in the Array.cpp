bool isPalindrome(string s)
{
    int l = 0 , r = s.size()-1;
    while(l < r)
    {
        if(s[l] != s[r])return 0;
        l++;r--;
    }
    return 1;
}

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it : words)
        {
            if(isPalindrome(it))return it;
        }
        return "";
    }
};
