class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = static_cast<int>(nums.size());
        int sum=0;
        int left =0;
        int k=INT_MAX;
        for(int i = 0; i<s;i++)
        {
            sum += nums[i];
            while(sum >= target)
            {
                k = min(k, i - left +1);
                sum -=nums[left];
                left++;
            }
        }
        if(k == INT_MAX) return 0;
        return k;
    }
};