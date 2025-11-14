class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int sNote = static_cast<int>(ransomNote.size());
        int sMag = static_cast<int>(magazine.size());
        if(sNote > sMag)return false;
        int k =0;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i =0; i< sMag; i++)
        {
            if(ransomNote[k]==magazine[i])
            {
                k++;
            }
        }
        if(k == sNote) return true;
        else return false;

    }
};