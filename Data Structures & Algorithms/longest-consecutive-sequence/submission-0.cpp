class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int num : nums)
        {
            s.insert(num);
        }

        int longest = 0;

        for(int num : s)
        {
            if(s.count(num - 1) == 0)
            {
                int current = num;
                int length = 1;

                while(s.count(current + 1))
                {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};