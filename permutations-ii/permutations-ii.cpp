class Solution {
public:
    set<vector<int>> sol;
    
    void helper(vector<int> & nums, int index) {
        if(index == nums.size()) {
            sol.insert(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++) {
            swap(nums[i], nums[index]);
            helper(nums, index + 1);
            swap(nums[i], nums[index]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return {nums};
        helper(nums, 0);
        vector<vector<int>> ans(sol.begin(), sol.end());
        return ans;
    }
};
