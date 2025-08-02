class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        int n = s.size();
        bool can = false;
        for(int i = 0 ; i <= n ; ++i)
        {
            bool cur = true;
            for(int j = 0 ; j < n ; ++j)
            {
                cur &= s[(i+j)%n] == goal[j];
            }
            can |= cur;
        }
        return can;
    }
};
