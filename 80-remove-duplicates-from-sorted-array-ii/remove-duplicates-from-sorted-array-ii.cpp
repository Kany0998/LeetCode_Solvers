class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        const int s = static_cast<int>(nums.size());
        int numer_count = 0;
        int k =2;

        if(s <=2) return s;

        for(int i =2; i < s ; i++)
        {
            if(nums[i] != nums[k-2])
            {
                nums[k]=nums[i];
                k++;
            }
           
        }
        return k;
    }
};