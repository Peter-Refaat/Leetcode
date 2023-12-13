class Solution {
public:
    int rob(vector<int>& nums)
    {
        int currmax = 0;
        int prevmax = 0;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            int check = currmax;
            currmax = max(nums.at(i)+prevmax , currmax);
            prevmax = check;
        }
        return currmax;
    }
};
