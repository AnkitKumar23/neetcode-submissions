class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        unordered_map<int, int> map;

        for (int i=0; i<nums.size(); i++)
        {
            auto it = map.find(target-nums[i]);

            if (it != map.end())
            {
                if (i < it->second)
                {
                    result.push_back(i);
                    result.push_back(it->second);
                }
                else
                {
                    result.push_back(it->second);
                    result.push_back(i);
                }

                return result;
            }

            map[nums[i]] = i;
        }

        return result;
    }
};
