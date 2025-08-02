class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int mn = INT_MAX;
        for (auto &it : nums)
            mn = min(mn, it);
        return mn;
    }
};