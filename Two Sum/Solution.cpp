class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            int required = target - nums[i];
            if(um.count(required))
                return{um[required],i};
            else
                um.insert({nums[i],i});
        }
        return{};
    }
};