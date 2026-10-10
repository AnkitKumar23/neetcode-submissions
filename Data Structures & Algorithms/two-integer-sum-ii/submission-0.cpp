class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int start = 0;
        int end = numbers.size() - 1;
        vector<int> res;

        while (start < end)
        {
            if (target > numbers[start] + numbers[end])
                start++;
            else if (target < numbers[start] + numbers[end])
                end--;
            else
            {
                res.push_back(start+1);
                res.push_back(end+1);
                break;
            }

        }

        return res;
    }
};
