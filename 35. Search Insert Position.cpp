class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int temp;
        bool ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums.at(i) == target)
            {
                ans = 1;
                temp = i;
            }
        }
        if(ans)
        {
            return temp;
        }
        else
        {
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(nums.at(i) == target)
                {
                    return i;
                }
            }
        }
        return 0;
    }
};
