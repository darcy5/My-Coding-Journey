class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=prices[0];
        int maxProf=0;

        for(int i=0;i<prices.size();i++){
            maxProf=max(maxProf,prices[i]-min_price);
            min_price=min(prices[i],min_price);
        }
        return maxProf;
    }
};