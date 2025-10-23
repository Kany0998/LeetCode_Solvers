class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.empty()) return "";

        std::string out = "";
        const int k = static_cast<int>(strs.size());
        for(int j = 0; j<strs[0].length(); j++)
        {
            char c = strs[0][j];
            for(int i = 0; i < k; i++)
            {
                if(strs[i][j] !=c)
                {
                    return out;
                }
            }
            out+=c;
        }
        return out;
    }
};