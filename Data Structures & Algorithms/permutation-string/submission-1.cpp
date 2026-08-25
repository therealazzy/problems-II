class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //two maps to store frequencies of chars in each string
        //fixed window of length of string 1
        //keep iterating and checking if it contains a permutation
        int n = s1.length();
        if(n > s2.length()){
            return false;
        }
        unordered_map<char, int> count1;
        unordered_map<char, int> count2;
        count1.reserve(26);//problem states they can only be lowercase english letter
        count2.reserve(26);
        for(int i = 0; i < n; ++i){
            count1[s1[i]]++;
            count2[s2[i]]++;
        }
        if(count1 == count2){
            return true;
        }
        for(int i = n; i < s2.length(); ++i){
            count2[s2[i]]++;
            if(count2[s2[i-n]] == 1){
                count2.erase(s2[i-n]);
            }else{count2[s2[i-n]]--;}

            if(count1 == count2){
                return true;
            }
        }
        return false;
    }
};
