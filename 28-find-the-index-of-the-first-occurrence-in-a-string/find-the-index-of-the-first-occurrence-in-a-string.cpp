class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n = static_cast<int>(needle.size());
        int k = static_cast<int>(haystack.size());
        for(int i =0; i <= k-1 ; i++)
        {
            int j = 0;
            while(j<n && haystack[i+j]==needle[j])
            {
                j++;
            }
            if(j == n) return i;
        }
        return -1;
    }
};