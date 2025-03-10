class Solution {
private:
    static const int N = 1e5 + 5;
    int sparse[N][18] , lg[N];
    int merge(int a , int b)
    {
        return max(a,b);
    }
    void build(vector<int>& arr)
    {
        int n = arr.size();
        for(int i = 2 ; i < N ; ++i)
            lg[i] = lg[i>>1] + 1;
        for(int i = 0 ; i < n ; ++i)
            sparse[i][0] = arr[i];
        for(int msk = 1 ; (1<<msk) <= n ; ++msk)
            for(int i = 0 ; i + (1<<msk) <= n ; ++i)
                sparse[i][msk] = merge(sparse[i][msk-1],sparse[i + (1<<(msk - 1))][msk - 1]);
    }
    int query(int l, int r)
    {
        int sz = r-l+1;
        int Log = lg[sz];
        return merge(sparse[l][Log],sparse[r - (1<<Log) + 1][Log]);
    }
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        build(nums);
        for(int i = 0 ; i <= n - k ; ++i)
            ans.push_back(query(i,i+k-1));
        return ans;
    }
};
