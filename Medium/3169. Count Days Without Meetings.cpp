class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int l = meetings[0][0] , r = meetings[0][1] , n = meetings.size();
        for(int i = 1 ; i < n ; ++i)
        {
            if(meetings[i][0] > r)
                days -= r-l+1 , l = meetings[i][0] , r = meetings[i][1];
            else l = min(meetings[i][0],l) , r = max(meetings[i][1],r);
        }
        return days - (r-l+1);
    }
};
