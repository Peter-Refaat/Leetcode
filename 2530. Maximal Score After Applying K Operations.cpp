class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long>pq;
        long long ans = 0;
        for(auto& it : nums)
            pq.push(it);
        while(k--)
        {
            long long cur = pq.top();
            ans+=cur;
            pq.pop();
            pq.push((cur+2)/3);
        }
        return ans;
    }
};
