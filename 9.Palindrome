class Solution {
public:
    bool isPalindrome(int x)
     {
  bool ans;
  string s = to_string(x);
  vector<int>reversed = {};
  for(int j = size(s) - 1 ; j > -1 ; j--)
  {
    reversed.push_back(s[j]);
  }
  for(int i = 0 ; i < size(s) ; i++)
  {
    if(reversed.at(i) == s[i])
    {
      ans = 1;
    }
    else
    {
      ans = 0;
      break;
    }
  }
  return ans;
    }
};
