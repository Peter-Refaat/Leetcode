class NumArray {
#define L (2*node+1)
#define R (2*node+2)
#define mid ((l+r)/2)
private:
    int n,sz;
    vector<int>seg,a;
    int merge(int a , int b)
    {
        return a+b;
    }
    void build(int l , int r , int node)
    {
        if(l == r)
        {
            if(l < n)
                seg[node] = a[l];
            return;
        }
        build(l,mid,L);
        build(mid+1,r,R);
        seg[node] = merge(seg[L],seg[R]);
    }
    void update(int l , int r , int node , int idx , int val)
    {
        if(l == r)
        {
            if(l < n)
                seg[node] = val;
            return;
        }
        if(idx <= mid)
            update(l,mid,L,idx,val);
        else update(mid+1,r,R,idx,val);
        seg[node] = merge(seg[L],seg[R]);
    }
    int query(int l , int r, int node , int lq , int rq)
    {
        if(l > rq or r < lq)
            return 0;
        if(l >= lq and r <= rq)
            return seg[node];
        return merge(query(l,mid,L,lq,rq),query(mid+1,r,R,lq,rq));
    }
public:
    NumArray(vector<int>& nums) {
        sz = 1;
        n = nums.size();
        a = nums;
        while(sz < n)
            sz <<= 1;
        seg.resize(sz<<1);
        build(0,sz-1,0);
    }
    
    void update(int index, int val) {
        update(0,sz-1,0,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0,sz-1,0,left,right);
    }
#undef L
#undef R
#undef mid
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
