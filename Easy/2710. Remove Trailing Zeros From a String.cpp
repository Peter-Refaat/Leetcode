class Solution {
public:
    string removeTrailingZeros(string num)
    {
        if(num[size(num)-1] != '0')
        return num;
        else
        {
            int i = size(num) - 1;
            while(num[i] == '0')
            {
                num.pop_back();
                i--;
            }
        }
        return num;
    }
};
