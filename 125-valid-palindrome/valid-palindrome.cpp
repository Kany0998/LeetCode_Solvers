#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string t;
        t.reserve(s.size());

        for (char c : s) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                t.push_back(std::tolower(static_cast<unsigned char>(c)));
            }
        }

        int i = 0;
        int j = static_cast<int>(t.size()) - 1;

        while (i < j) {
            if (t[i] != t[j]) return false;
            ++i;
            --j;
        }

        return true;
    }
};
