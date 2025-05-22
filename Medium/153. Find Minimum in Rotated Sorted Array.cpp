class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        int ans = INT_MAX;
        while (l <= r)
        {
            int m = l + r >> 1;
            if (nums[m] > nums[r])
                l = m + 1;
            else
                ans = min(ans, nums[m]), r = m - 1;
        }
        return ans;
    }
};