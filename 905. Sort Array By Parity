class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
         sort(nums.begin(),nums.end());
         vector<int>parity = {};
         for(int i = 0 ; i < nums.size() ; ++i)
         {
             if(nums.at(i) % 2 == 0) parity.push_back(nums.at(i));
         }
         for(int i = 0 ; i < nums.size() ; ++i)
         {
             if(nums.at(i) % 2 != 0) parity.push_back(nums.at(i));
         }
         return parity;
    }
};
