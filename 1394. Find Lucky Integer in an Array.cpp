class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i = 0 ; i < arr.size() ; i++)
        {
            int n = count(arr.begin(),arr.end(),arr[i]);
            if(n == arr[i])
            {
                return n;
                break;
            }
        }
        return -1;
    }
};
