class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        int length = 0;
        for(int i = 0 ; i < size(s) ; ++i)
        {
            if(s[i] != ' ')
            {
                count++;
            }
            else
            {
             if(count!=0)
            {
                length = count;
            }
            count = 0;
            }
            
            
        }
        if(count != 0) length = count;
        return length;
    }
};
