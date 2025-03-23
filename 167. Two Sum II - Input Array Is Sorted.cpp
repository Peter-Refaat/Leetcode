class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        map<int,set<int>>mp;
        int n = numbers.size();
        for(int i = 0 ; i < n ; ++i)
            mp[numbers[i]].insert(i);
        for(auto& it : mp)
        {
            int curidx = *it.second.begin();
            it.second.erase(it.second.begin());
            bool found = (mp.find(target - it.first) != mp.end() and mp.find(target - it.first)->second.size() > 0);
            if(found)
                return {curidx+1,*mp.find(target-it.first)->second.begin()+1};
        }
        return {-1,-1};
    }
};
