class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;

        for (int i=0; i<nums.size()-2; i++)
        {
            int target = 0 - nums[i];

            int start = i+1;
            int end = nums.size() - 1;

            while (start < end)
            {
                if (nums[start] + nums[end] < target)
                    start++;
                else if (nums[start] + nums[end] > target)
                    end--;
                else
                {
                    result.insert({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    continue;
                }
            }
        }
        return vector<vector<int>>(result.begin(), result.end());
    }
};
