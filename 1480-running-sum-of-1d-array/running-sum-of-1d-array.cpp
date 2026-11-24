class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> summ;
        summ.push_back(nums[0]);
        for(int i = 1; i<nums.size(); i++){
            summ.push_back(summ[i-1]+nums[i]);
        }

        return summ;
    }
};