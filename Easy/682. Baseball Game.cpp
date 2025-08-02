class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto& it : operations)
        {
            if(it == "+")
            {
                if(st.size() >= 2)
                {
                    int cur = st.top();
                    st.pop();
                    int curr = st.top() + cur;
                    st.push(cur);
                    st.push(curr);
                }
            }
            else if(it == "D")
            {
                st.push(st.top()<<1);
            }
            else if(it == "C")
            {
                st.pop();
            }
            else st.push(stoi(it));
        }
        int ret = 0;
        while(st.size())
            ret += st.top() , st.pop();
        return ret;
    }
};
