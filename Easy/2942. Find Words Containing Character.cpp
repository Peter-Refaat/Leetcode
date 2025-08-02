class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int>indexes = {};
      for(int i = 0 ; i < words.size() ; i++)
      {
          int c = words[i].find(x);
          if(c >= 0)
          {
              indexes.push_back(i);
          }
      }
        return indexes;
    }
};
