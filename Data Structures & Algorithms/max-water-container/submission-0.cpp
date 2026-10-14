class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int start = 0;
        int end  = heights.size() - 1;

        int res = 0;

        while (start < end)
        {
            int area = (end - start) * min(heights[start], heights[end]);
            res = max(res, area);

            if (heights[start] < heights[end])
                start++;
            else
                end--;
        }

        return res;
    }
};
