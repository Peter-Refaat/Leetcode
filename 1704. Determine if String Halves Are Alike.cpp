class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int counta = 0;
        int countb = 0;
        string a = "";
        string b = "";
        int n = size(s);
        for(int i = 0 ; i < n/2 ; ++i)
        {
            a += s[i];
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') counta++;
        }
        for(int i = n/2 ; i < n ; ++i)
        {
            b += s[i];
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') countb++;
        }
        return (counta == countb);
    }
};
