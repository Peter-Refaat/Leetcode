class Solution {
private:
    int pascal[35][35];
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>>ans;
        for(int i = 0 ; i <= rowIndex ; ++i)
        {
            vector<int>cur;
            for(int j = 0 ; j <= i ; ++j)
            {
                if(!j)
                    pascal[i][j] = 1;
                else pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
                cur.push_back(pascal[i][j]);
            }
            ans.push_back(cur);
        }
        return ans[rowIndex];
    }
};
