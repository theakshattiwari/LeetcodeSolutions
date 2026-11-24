class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = INT_MAX;
        int diff = 0;

        for(int i = 0; i<prices.size(); i++){
            minP = min(minP, prices[i]);
            diff = max(diff, prices[i]-minP);
        }

        return diff;
    }
};