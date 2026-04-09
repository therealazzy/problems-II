class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        // map out frequencies of each character in one string and check if the other string 
        // has the same exact characters
        unordered_map<char, int> freq;
        
        for( char& c : s){
            freq[c]++;
        }

        for( char& c : t){
            if(freq[c] <= 0) return false; //if the char in t doesnt exist in s or has a 
                                           //different amount of that char then its not a valid anagram
            freq[c]--;
            }
            return true;

    }
};
