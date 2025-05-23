class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        for(int i = 31 ; i >= 0 ; --i)
        {
            if((1LL<<i)&n)
                ret += (1LL<<(31-i));
        }
        return ret;
    }
};
