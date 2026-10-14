class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !std::isalnum(c);
        }), s.end());
        for (int i = 0; i < s.size() / 2; i++) {
            std::cout << s[i] << " | " << s[s.size() - 1 - i] << " . ";
            if (std::tolower(s[i]) != std::tolower(s[s.size() - i - 1])) {
                return false;
            }
        }
        return true;
    }
};
