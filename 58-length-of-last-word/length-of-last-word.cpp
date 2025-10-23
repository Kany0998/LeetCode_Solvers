class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        const int k = static_cast<int>(s.size());
        int count =0;
        for(int i =k-1; i>=0; i--)
        {
            if(s[i]!=' ')
            {
                count++;
                if(i > 0 && s[i-1]==' ')break;
            }
        }
        return count;
          
    }
};