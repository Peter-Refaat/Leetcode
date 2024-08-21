class Solution {
public:
    int reverse(int x)
    {
        string sol;
    string s = to_string(x);
    if(s[0] == '-')
    {
        for(int i = size(s) - 1 ; i > 0 ; i--)
        {
            sol += s[i];
        }
        return (-stoll(sol) < INT_MIN) ? 0 : -stoi(sol);
    }
    else
    {
        ::reverse(s.begin(),s.end());
        return (stoll(s) > INT_MAX) ? 0 : stoi(s);
    }
    }
};
