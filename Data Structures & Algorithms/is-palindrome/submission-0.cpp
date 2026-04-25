class Solution {
public:
    bool isPalindrome(string s) {
        //construct a string that will only be made up of lower case alnum characters and check if its the same backwards
        string newStr = "";
        for(char& c : s){
            if(isalnum(c)){
                newStr += tolower(c);
            }
        }
        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
