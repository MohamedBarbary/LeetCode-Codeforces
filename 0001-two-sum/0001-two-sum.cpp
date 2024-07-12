class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> num_map; 
        for (int i = 0; i < nums.size(); ++i) {
            int remaining = target - nums[i];
            if (num_map[remaining] != 0) {
                return {num_map[remaining]-1, i};
            }
            num_map[nums[i]] = i+1; 
        }
        return {}; 
    }
};