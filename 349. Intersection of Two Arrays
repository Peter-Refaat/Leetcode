class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        map<int,bool>mp1;
        map<int,bool>mp2;
        for(int i = 0 ; i < nums1.size() ; ++i)
        mp1[nums1[i]] = true;
        for(int i = 0 ; i < nums2.size() ; ++i)
        mp2[nums2[i]] = true;
        for(auto& it : mp1)
        if(mp2[it.first])ans.push_back(it.first);
        return ans;
    }
};
