class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        
        map<int, int> map_;
        for (int i=0;i<nums.size();i++)
        {
            map_[nums[i]] = i;
        }
        
        for (int i=0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (map_.count(complement) && map_[complement] != i)
            {
                ret.push_back(i);
                ret.push_back(map_[complement]);
                return ret;
            }
        }
        
        return ret;
    }
};