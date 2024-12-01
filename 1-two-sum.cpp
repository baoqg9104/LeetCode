class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        m[nums[0]] = 0;

        for (int i=1; i<nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                return {m[target - nums[i]], i};
            }
            m[nums[i]] = i;
        }

        return {};
    }
};