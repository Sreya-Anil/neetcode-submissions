class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> in;
        int needed;
    for(int i=0;i<nums.size();i++)
    {
      needed=target-nums[i];
      if(in.count(needed))
      {
        return {in[needed],i};
      }
      in[nums[i]]=i;
    }
    return {};
    }
};
