class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int,bool>vis;
        vector<int>ret;
        int k = 0;
        for(auto& it : nums)
            if(!vis[it])
                vis[it] = 1 , ret.push_back(it);
        nums = ret;
        k = vis.size();
        return k;
    }
};
