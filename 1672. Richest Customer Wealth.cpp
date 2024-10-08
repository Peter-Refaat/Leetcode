class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int rows = accounts.size();
        int cols = accounts[0].size();
        vector<int>wealth;
        for(int i = 0 ; i < rows ; ++i)
        {
            int sum = 0;
            for(int j = 0 ; j < cols ; ++j)
            {
               sum+=accounts[i][j];
            }
            wealth.push_back(sum);
        }
        return *max_element(wealth.begin(),wealth.end());
    }
};
