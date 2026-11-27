class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum = 0;
       int n = nums.size();
       for(int i = 0; i<k; i++){
        sum += nums[i];
       }

       double maxSum = sum;
       for(int j = k; j<n; j++){
        sum += nums[j] - nums[j-k];
        maxSum = max(maxSum,sum);
       }

        return (maxSum/k);
    }
};