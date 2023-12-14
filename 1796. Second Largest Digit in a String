class Solution {
public:
    int secondHighest(string s)
    {
        vector<int>nums;
        for(char x : s)
        {
            if(isdigit(x)) nums.push_back(x - '0');
        }
        sort(nums.begin(),nums.end(),greater<int>());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return (nums.size() > 1) ?  nums[1] : -1;
    }
};
