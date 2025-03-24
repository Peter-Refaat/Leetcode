class Solution {
public:
    void combine(int l, int mid , int r, vector<int>& nums)
    {
        if(l==r)
            return;
        int lo = l , hi = mid+1 , idx = 0;
        vector<int>sorted(r-l+1);
        while(lo <= mid and hi <= r)
        {
            if(nums[lo] <= nums[hi])
                sorted[idx++] = nums[lo++];
            else sorted[idx++] = nums[hi++];
        }
        while(lo <= mid)
            sorted[idx++] = nums[lo++];
        while(hi <= r)
            sorted[idx++] = nums[hi++];
        for(int k = 0; k < r-l+1 ; ++k)
            nums[l + k] = sorted[k];
    }
    void mergeSort(int l , int r , vector<int>& nums)
    {
        if(l==r)
            return;
        int mid = l+r>>1;
        mergeSort(l,mid,nums);
        mergeSort(mid+1,r,nums);
        combine(l,mid,r,nums);
    }
    vector<int> sortArray(vector<int>& nums)
    {
        mergeSort(0,nums.size()-1,nums);
        return nums;
    }
};
