class Solution {
public:
    bool judgeCircle(string moves)
    {
        int sumR=0,sumL=0,sumU=0,sumD=0;
        for(int i : moves)
        {
           if(i == 'R')
           {
               sumR++;
           } 
           else if(i == 'L')
           {
               sumL++;
           }
           else if(i == 'D')
           {
               sumD++;
           }
           else if(i == 'U')
           {
               sumU++;
           }
        }
        return sumR == sumL && sumU == sumD;
    }
};
