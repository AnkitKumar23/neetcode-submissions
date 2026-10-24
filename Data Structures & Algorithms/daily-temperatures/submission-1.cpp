class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> st;

        int size = temperatures.size();
        vector<int> res(size);
        res[size-1] = 0;
        st.push(size-1);


        for (int i=size-2; i>=0; i--)
        {
            if (temperatures[i] >= temperatures[st.top()])
            {
                while (st.size() != 0 && temperatures[st.top()] <= temperatures[i])
                {
                    st.pop();
                }
            }
            res[i] = st.size() != 0 && st.top() > i ? st.top() - i : 0;
            st.push(i);
        }

        return res;
    }
};
