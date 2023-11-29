class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>merged(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        double n = merged.size();
        if(fmod(n,2) != 0)
        {
            return  merged.at(n / 2);
        }
        else
        {
            return (merged.at(n/double(2)) + merged.at(n/double(2)-1))/double(2);
        }
        return 0;
    }
};
