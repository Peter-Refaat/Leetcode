class Solution {
public:
    int subtractProductAndSum(int n)
    {
        string s = to_string(n);
        int prod = 1;
        int sum = 0;
        for(int i = 0 ; i < size(s) ; i++)
        {
            prod *= (s[i] - 48);
            sum += (s[i] - 48);
        }
        return prod - sum;
    }
};
