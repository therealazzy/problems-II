class Solution {
public:

    string encode(vector<string>& strs) {
        //store sizes of each word with a ',' between each int representing the size
        //add a '#' to identify the end of the sizes
        string res = "";
        vector<int> sizes;
        for(string& s : strs) sizes.push_back(s.size());
        for(int& sz : sizes) res+= to_string(sz) + ',';
        res+='#';
        for(string& s : strs) res+=s;
        return res;
        cout << res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        vector<int> sizes;
        int i = 0;
        while(s[i] != '#'){                 //while the current index isnt a '#'
            string cur = "";                //clear the current temp variable
            while(s[i] != ','){             //while we are not on ','
                cur += s[i];                //add the current number to the temporary variable
                i++;                        //move the index over 
            }
            sizes.push_back(stoi(cur));     //we add the current index to the sizes array because we are not on a ','
            i++;                            //move to the next index
        }
        i++;                                //once we hit the '#' that means we are out of the sizes section so we go 
                                            //to the next char which is the start of the words
        for( int& sz : sizes){              //for each 'size' which represents a new word and its length
            res.push_back(s.substr(i, sz)); //push the word into the res, starting from i and going until i + sz
            i += sz;                        //the next index (start of the next word) needs to be assigned as i+=sz
        }

        return res;
    }
};
