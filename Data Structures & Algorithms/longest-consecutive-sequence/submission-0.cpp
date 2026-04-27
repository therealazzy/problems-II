class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //optimal way is to use a set (no duplicate numbers and fast lookup time) as opposed to sorting
        unordered_set<int> set;
        for(int& n : nums){
            set.insert(n);
        }
        //check for the start of a sequence (if the number before it doesnt exist then its the start)
        int length = 0;
        for(int n : set){
            if(!set.contains(n - 1)){
                int end = n + 1;
                while(set.contains(end)){ //if the set contains the next element
                    end++; //increase the end element
                }
                length = max( length, end - n);
            }
        }

        return length;
    }
};
