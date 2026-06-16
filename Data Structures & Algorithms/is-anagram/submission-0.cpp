class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> chars1(s.begin(), s.end());
        vector<char> chars2(t.begin(), t.end());

        if(chars1.size() != chars2.size()) return false;

        // pick first char in chars1 - for loop
        for(int i = 0; i < chars1.size(); ++i) {
            // find the same char in chars2
            // if found, delete it
            // if not found, return false
            char current = chars1[i];
            auto it = find(chars2.begin(), chars2.end(), current);
            if (it != chars2.end()) chars2.erase(it);
            else if(it == chars2.end()) return false;
        }
            
        // if chars2 empty, return true
        if(chars2.empty()) return true;
    }
};
