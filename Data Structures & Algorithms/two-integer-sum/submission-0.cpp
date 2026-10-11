class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        unordered_map<int, int> indices;

        int n = static_cast<int>(nums.size());

        for (int i = 0; i < n; i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int comp = target - nums[i];
            if (indices.count(comp) && indices[comp] != i) {
                return {i, indices[comp]};
            }
        }
        return {};
        
    }
};
