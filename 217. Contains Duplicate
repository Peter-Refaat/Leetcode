class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<int>::iterator it;
        it = adjacent_find(nums.begin(),nums.end());
        return it != nums.end();
    }
};
