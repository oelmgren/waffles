class Solution {
public:
    
    vector<vector<int>> sol;
    int n;
    
    void helper(vector<int> & nums, int index) {
        if(index == n) sol.push_back(nums);
        for(int i = index; i < n; i++) {
            swap(nums[i], nums[index]);
            helper(nums, index + 1);
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        helper(nums, 0);
        return sol;
    }
};
