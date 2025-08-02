class Solution {
public:
    string toLowerCase(string s) 
    {
       string sol = "";
       for(int i = 0 ; i < size(s) ; i++)
       {
           sol += tolower(s[i]);
       } 
       return sol;
    }
};
