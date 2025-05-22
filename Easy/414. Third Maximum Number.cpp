class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long mx = LLONG_MIN,mxx = LLONG_MIN,mxxx = LLONG_MIN , n = nums.size();
        for(int i = 0 ; i < n ; ++i)
        {
            if(nums[i] > mx)
            {
                mxxx = mxx , mxx = mx, mx = nums[i];
            }
            else if(nums[i] > mxx and nums[i] != mx)
            {
                mxxx = mxx;
                mxx = nums[i];
            }
            else if(nums[i] > mxxx and nums[i] != mx and nums[i] != mxx)
                mxxx = nums[i];
        }
        if(mxxx != LLONG_MIN)
            return mxxx;
        return mx;
    }
};
