class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>freq;
        for(int i = 0 ; i < edges.size() ; ++i)
        {
            for(int j = 0 ; j < edges[1].size() ; ++j)
            {
                freq[edges[i][j]]++;
            }
        }
        int maxi = - 1, ans = 0;
        for(auto& [node,cnt] : freq)
        {
            if(cnt > maxi)
            {
                ans = node;
                maxi = cnt;
            }
        }
        return ans;
    }
};
