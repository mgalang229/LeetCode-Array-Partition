class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // 1 2 2 5 6 6
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];
        }
        return sum;
    }
};
