class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrices=-1;
        int maxProfit=0;

        for(int i=0; i<n; i++){
            if(minPrices != -1 && prices[i]>minPrices){
                int profit=prices[i]-minPrices;
                maxProfit=max(maxProfit,profit);
            }
            if(minPrices == -1){
                minPrices=prices[i];
            }
            minPrices=min(prices[i],minPrices);
        }

        return maxProfit;
    }

};
