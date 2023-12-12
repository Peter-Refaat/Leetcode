class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int count = 0;
        int n = details.size();
       string s = "";
       for(int i = 0 ; i < n ; ++i)
       {
           s = to_string(details[i][11] - 48) + to_string(details[i][12] - 48);
           int check = stoi(s);
           if(check > 60) count++;
           s.clear();
       }
       return count;
    }
};
