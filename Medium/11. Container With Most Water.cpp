class Solution
{
public:
    long long maxArea(vector<int> &height)
    {
        int n = height.size();
        long long ans = 0, l = 0, r = n - 1;
        while (l < r)
        {
            ans = max(ans, min(height[l], height[r]) * (r - l));
            if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};
