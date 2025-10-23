class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=0;
        int candidate = 0;
        const int k = static_cast<int>(nums.size());
        if(k == 0) return 0;
        for(int i =0 ; i<k; i++)
        {
            if(count == 0)
            {
                candidate = nums[i];
            }
            if(nums[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }

        }
        return candidate;
    }
};