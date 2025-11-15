class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int s = static_cast<int>(nums.size());

        for (int i = 0; i < s - 1; i++)
        {
            for (int j = i + 1; j < s && j - i <= k; j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
