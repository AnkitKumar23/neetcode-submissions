class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;

        for (auto& token : tokens)
        {
            if (token.size() > 1)
            {
                st.push(stoi(token));
                continue;
            }

            switch(token[0])
            {
                case '+':
                {
                    int s2 = st.top();
                    st.pop();
                    int s1 = st.top();
                    st.pop();
                    int num = s1 + s2;
                    st.push(num);
                    break;
                }
                case '-':
                {
                    int s2 = st.top();
                    st.pop();
                    int s1 = st.top();
                    st.pop();
                    int num = s1 - s2;
                    st.push(num);
                    break;
                }
                case '*':
                {
                    int s2 = st.top();
                    st.pop();
                    int s1 = st.top();
                    st.pop();
                    int num = s1 * s2;
                    st.push(num);
                    break;
                }
                case '/':
                {
                    int s2 = st.top();
                    st.pop();
                    int s1 = st.top();
                    st.pop();
                    int num = s1 / s2;
                    st.push(num);
                    break;
                }
                default:
                    st.push(stoi(token));
            }
        }

        return st.top();
    }
};
