class Solution {
public:
    bool isValid(string s) {
        
        if (s.size() == 0)
            return false;

        stack<char> st;

        for (int i=0; i<s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                    return false;
                    
                char ch = st.top();

                if ((s[i] == ')' && ch != '(')
                    || (s[i] == '}' && ch != '{')
                    || (s[i] == ']' && ch != '['))
                
                return false;

                st.pop();
            }
        }
        return st.size() == 0;
    }
};
