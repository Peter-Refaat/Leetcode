class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto& circle : queries)
        {
            long double x = circle[0];
            long double y = circle[1];
            long double r = circle[2];
            int cnt=0;
            for(auto& point : points)
            {
                long double xi = point[0];
                long double yi = point[1];
                long double dis = sqrtl((x-xi)*(x-xi)+(y-yi)*(y-yi));
                if(dis <= r)
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
