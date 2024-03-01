class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        multiset<int>st;
        int n = nums.size();
        for(auto it : nums)st.insert(it);
        if(st.count(target) <= 0)
        {
            vector<int>v = {-1,-1};
            return v;
        }
        else
        {
            int start = 0 , end = n-1;
            int ans1 = 0 , ans2 = 0;
            while(start <= end)
            {
                int mid = end - (end-start)/2;
                if(nums[mid] > target)
                    end = mid - 1;
                if(nums[mid] < target)
                start = mid+1;
                if(nums[mid] == target)
                {
                    ans1 = mid;
                    end = mid-1;
                }
            }
            start = ans1 , end = n-1;
            while(start <= end)
            {
                int mid = end - (end-start)/2;
                if(nums[mid] > target)
                    end = mid - 1;
                if(nums[mid] < target)
                start = mid+1;
                if(nums[mid] == target)
                {
                    ans2 = mid;
                    start = mid+1;
                }
            }
            vector<int>v = {ans1,ans2};
            return v;
        }
    }
};
