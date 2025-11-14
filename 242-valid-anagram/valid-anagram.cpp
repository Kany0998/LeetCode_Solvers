class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss = static_cast<int>(s.size());
        int st = static_cast<int>(t.size());
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool check = true;
        if(ss != st) return false;

        for(int i =0; i < ss ;i++)
        {
            if(s[i]!=t[i])check = false;
        }
        return check;
    }
};