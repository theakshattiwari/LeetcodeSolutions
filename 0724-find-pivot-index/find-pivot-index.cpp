class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int summ = 0;
        for(int i = 0; i<nums.size(); i++){
            summ = summ+nums[i];
        }

        int Lsumm = 0;
        for(int i = 0; i<nums.size(); i++){
            int right = summ-Lsumm-nums[i];

            if(right == Lsumm){
                return i;
            }else{
                Lsumm = Lsumm+nums[i];
            }
        }

        return -1;
    }
};