class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int zero = 0;
        int maxL = 0;

        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i]==0){
                zero++;
            }
            // maxL++;

            while(zero>k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }

            maxL = max(maxL, i-left+1);
        }

        return maxL;
    }
};