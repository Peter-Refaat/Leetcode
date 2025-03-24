class Solution {
public:
    vector<int> mergeSort(int l , int r , vector<int>& nums)
    {
        if(l==r)
            return {nums[l]};
        int m = l+r>>1;
        vector<int>left = mergeSort(l,m,nums);
        vector<int>right = mergeSort(m+1,r,nums);
        int p1 = 0 , p2 = 0;
        vector<int>ret;
        while(p1 < left.size() and p2 < right.size())
        {
            if(left[p1] <= right[p2])
                ret.push_back(left[p1++]);
            else ret.push_back(right[p2++]);
        }
        while(p1 < left.size())
            ret.push_back(left[p1++]);
        while(p2 < right.size())
            ret.push_back(right[p2++]);
        return ret;
    }
    vector<int> sortArray(vector<int>& nums)
    {
        return mergeSort(0,nums.size()-1,nums);
    }
};
