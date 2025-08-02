class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int sumNotDivM = 0;    
        int sumDivM = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            (i % m == 0) ? sumDivM+=i : sumNotDivM+=i;
        }
        return sumNotDivM - sumDivM;
    }
};
