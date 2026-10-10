class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int res = 0;
        unordered_set<int> numset(nums.begin(), nums.end());
        unordered_map<int, int> map;

        for (int num : nums)
        {
            if (numset.find(num-1) == numset.end() && map.find(num) == map.end())
            {
                map[num] = 1;
                int next = num+1;
                while (numset.find(next++) != numset.end())
                {
                    map[num]++;
                }

                res = max(res, map[num]);
            }
        }

        return res;
    }
};
