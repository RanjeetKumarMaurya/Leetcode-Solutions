class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            map[nums[i]]++;
        
        int mx = 0;
        for(int i = 0; i < n; i++){
            int count = 1;
            int currNum = nums[i];
            if(map.find(currNum -1 ) != map.end())
                continue;
            while( map.find(currNum + 1 ) != map.end())
            {
                currNum++;
                count++;
            }
            mx = max(mx, count);
        }
        return mx;
    }
};