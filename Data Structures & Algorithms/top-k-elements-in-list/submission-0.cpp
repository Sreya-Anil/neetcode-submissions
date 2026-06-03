class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> c;
       for(int i:nums)
       {
        c[i]++;
       }
       vector<pair<int,int>> arr;
       for(const auto& p:c)
       {
        arr.push_back({p.second,p.first});

       }
       sort(arr.rbegin(),arr.rend());

       vector<int> result;
       for(int i=0;i<k;i++){
        result.push_back(arr[i].second);
       }
       return result;
    }
};
