class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())return false;
        
        vector<char> constant, counter;
        for (char c : s) constant.push_back(c);
        sort(constant.begin(), constant.end());
        for (char c : t) counter.push_back(c);
        sort(counter.begin(), counter.end());

        for(int x = 0; x<s.size();x++){
            if(constant[x] != counter[x])return false;
        }

        return true;
    }
};