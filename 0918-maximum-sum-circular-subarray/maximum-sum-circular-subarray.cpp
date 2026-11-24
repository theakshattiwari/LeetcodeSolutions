class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int maxSum = nums[0];
        int minSum = nums[0];

        int currMax = 0;
        int currMin = 0;

        for(int i = 0; i<nums.size(); i++){
            totalSum += nums[i];

            currMax = max(nums[i],currMax+nums[i]);
            currMin = min(nums[i], currMin+nums[i]);

            maxSum = max(maxSum,currMax);
            minSum = min(minSum,currMin);
        }

        if(maxSum < 0){
            return maxSum;
        }

        return max(maxSum,totalSum-minSum);
    }
};