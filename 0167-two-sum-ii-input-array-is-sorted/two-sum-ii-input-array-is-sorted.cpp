class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;
        vector<int> ans;

        for(int i = 0; i<n; i++){
            if((numbers[l]+numbers[r]) == target){
                ans.push_back(l+1);
                ans.push_back(r+1);

                return ans;

            }

            if ((numbers[l]+numbers[r]) > target){
                r--;
            }else{
                l++;
            }
        }

        return ans;
    }
};