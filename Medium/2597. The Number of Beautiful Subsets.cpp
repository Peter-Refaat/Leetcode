class Solution {
public:
    int rec(int n , int k , vector<int>& nums ,int i, unordered_map<int,int>&st)
    {
        if(i == n)
            return 0;
        int take = 0 , leave = 0;
        bool in = false;
        if(!st[nums[i]+k] and !st[nums[i]-k])
        {
            st[nums[i]]++ , take = rec(n,k,nums,i+1,st)+1;
            in = true;
        }
        if(in)
            st[nums[i]]--;
        leave = rec(n,k,nums,i+1,st);
        return take+leave;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        return rec((int)nums.size(),k,nums,0,mp);
    }
};
