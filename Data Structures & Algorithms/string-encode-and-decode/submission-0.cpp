class Solution {
public:

    string encode(vector<string>& strs) {
        string res ="";

        for(string& s : strs){
            res += s+(char(0xFFFFFF));  //add the string to the return string with a character that is 
                                        //outside of the ascii range at the end of each string
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string cur = "";
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == (char)0xFFFFFF){     //if the delimiter is found
                res.push_back(cur);         //push the temporary string variable to the result
                cur = "";                   //clear the temporary string variable
            } else {                        //if the delimiter is not found yet
                cur.push_back(s[i]);        //push the current char in the string to the temporary variable that will be 
                                            //pushed to res when the delimiter is found
            }
        }
        return res;
    }
};
