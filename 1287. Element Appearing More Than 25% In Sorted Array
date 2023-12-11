class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int freq[1000000] = {};
        for(int i = 0 ; i < arr.size() ; ++i)
        {
            freq[arr[i]]++;
        }
        int max = -1,index;
        for(int i = 0 ; i < 100000 ; ++i)
        {
            if(freq[i] >= max)
            { 
                max = freq[i];
                index = i;
            }
        }
        return index;
    }
};
