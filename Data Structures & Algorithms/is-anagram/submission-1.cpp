class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sRecord;
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            sRecord[s[i]] = sRecord[s[i]] + 1;
        }
        
        for (int i = 0; i < t.length(); i++) {
            if (sRecord[t[i]] != 0) {
                sRecord[t[i]] = sRecord[t[i]] - 1;
            } else {
                return false;
            }
        }
        return true;
    }
};
