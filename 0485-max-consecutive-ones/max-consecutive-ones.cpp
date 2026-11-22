class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxxi = 0;
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                maxxi = max(count,maxxi);
            }else{          
                count = 0;
            }
        }

        return maxxi;
    }
};