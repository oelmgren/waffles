class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // if(nums.size())
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};