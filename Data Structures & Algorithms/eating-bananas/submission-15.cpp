class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;

        while(l <=r){
            int k = l + ((r - l)/ 2);
            long long hours = 0; //changed from int to account for test cases that include 2,147,483,647 hours
            for(int& p : piles){
                hours += (p + (long long)k - 1) / k;
            }

            if(hours <= h){
                res = min(res, k);
                r = k - 1;
            }else{
                l = k + 1;
            }
        }


        return res;
    }
};
