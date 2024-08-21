class Solution {
public:
    int averageValue(vector<int>& nums)
    {
        int sum = 0;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(nums.at(i) % 2 == 0 && nums.at(i) % 3 == 0)
            {
                 sum+=nums.at(i);
                 count++;
            }
        }
        if(count == 0) return 0;
        return sum/count;
    }
};
