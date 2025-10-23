class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 0;
        const int n = static_cast<int>(nums.size());
        if(n == 0)return n;
        for(int i =0; i < n-1 ; i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        nums[k++] = nums[n-1];
        return k;
    }
};