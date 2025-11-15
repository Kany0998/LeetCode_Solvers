class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;

        int appare[26]= {0};

        for(char c: s)
        {
            appare[c - 'a']++;
        }
        for(char c :t)
        {
            if(--appare[c - 'a']<0) return false;
        }
        return true;
    }
};