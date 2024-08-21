class Solution {
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int countL = 0;
        int countR = 0;
        int count_ = 0;
        for(int i = 0 ; i < size(moves) ; ++i)
        {
            if(moves[i] == 'L') countL++;
            if(moves[i] == 'R') countR++;
            if(moves[i] == '_') count_++;
        }
        if(countL >= countR)
        {
            countL += count_;
            return countL - countR;
        } 
        else
        {
            countR += count_;
            return countR - countL;
        }
        return 0;
    }
};
