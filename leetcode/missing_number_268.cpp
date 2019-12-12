class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectSum = (nums.size() + 1) * nums.size() / 2;
        int actualSum = 0;
        for (int i = 0; i < nums.size(); i++)
            actualSum += nums[i];
        return expectSum - actualSum;
    }
};
