class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        vector<int>::iterator it = is_sorted_until(nums.begin(),nums.end());
        return distance(nums.begin(),it) - 1;
    }
};
