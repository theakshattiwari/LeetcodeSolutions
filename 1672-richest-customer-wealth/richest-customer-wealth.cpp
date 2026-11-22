class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int maxi = 0;
        for(int i = 0; i<n; i++){
            int count = 0;

            for(int j = 0; j<accounts[i].size(); j++){
                count = count+accounts[i][j];
            }

            maxi = max(count,maxi);
            
        }

        return maxi;
    }
};