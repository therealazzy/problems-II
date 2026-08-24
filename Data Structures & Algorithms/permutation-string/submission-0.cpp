class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false;
        }
        int len1 = s1.length();
        unordered_map<char, int> count1;
        count1.reserve(26);
        unordered_map<char,int> count2;
        count2.reserve(26);
        for(int i = 0; i < len1; ++i){
            count1[s1[i]]++;
            count2[s2[i]]++;
        }

        if(count1 == count2){
            return true;
        }

        for(int i = len1; i < s2.length(); ++i){
            count2[s2[i]]++;
            if(count2[s2[i - len1]] == 1){
                count2.erase(s2[i -len1]);
            }else{
            count2[s2[i - len1]]--;
            }
            if(count1 == count2){
                return true;
            }
        }
        return false;
    }
};
