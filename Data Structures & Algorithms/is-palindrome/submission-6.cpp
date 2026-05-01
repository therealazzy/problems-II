class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l < r){
            while(l<r && !isval(s[l])) l++;
            while(l < r && !isval(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }

    bool isval(char c) {
        unsigned char uc = static_cast<unsigned char>(c);
        return (uc >= '0' && uc <= '9') || (uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z');
    }

};
