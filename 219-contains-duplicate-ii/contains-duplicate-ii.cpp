class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_set<int> range;
        const int s = static_cast<int>(nums.size());
        for(int i =0; i < s; i++)
        {
            if(range.count(nums[i])) return true;

            range.insert(nums[i]);
            if(static_cast<int>(range.size()) > k)
            {
                range.erase(nums[i -k]);
            }
        }
        return false;
    }
};
