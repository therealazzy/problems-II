class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //if L > R : l++ r++;
        //if L < R : r++; maxProf = R - L;

        int l = 0;
        int r = 1;
        int prof = 0;
        while( r < prices.size()){
            if(prices[l] > prices[r]){
                l = r;
            }
            else{
                prof = max(prof, prices[r] - prices[l]);
            }
            r++;
        }
        return prof;
    }
};
