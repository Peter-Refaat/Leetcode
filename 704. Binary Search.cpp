class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size()-1;
        while(l <= r)
        {
            int m = l+r>>1;
            if(nums[m] == target)
                return m;
            if(target > nums[m])
                l = m+1;
            else r = m-1;
        }
        return -1;
    }
};
