class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string>v;
        string temp;
        for(auto& it : sentence)
        {
            if(it != ' ')
                temp+=it;
            else
                v.push_back(temp) , temp = "";
        }
        if(temp.size())
            v.push_back(temp);
        int n = v.size();
        for(int i = 0 ; i < n-1 ; ++i)
        {
            if(v[i].back() != v[i+1][0])
                return false;
        }
        return (v.back().back() == v[0][0]);
    }
};
