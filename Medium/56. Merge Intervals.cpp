class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int l = intervals[0][0] , r = intervals[0][1] , n = intervals.size();
        vector<vector<int>>ans;
        for(int i = 1 ; i < n ; ++i)
        {
            if(intervals[i][0] > r)
                ans.push_back({l,r}) , l = intervals[i][0] , r = intervals[i][1];
            else l = min(l,intervals[i][0]) , r = max(r,intervals[i][1]);
        }
        ans.push_back({l,r});
        return ans;
    }
};
