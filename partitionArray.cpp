class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        
        if(nums.size() % k != 0) return false;
        unordered_map<int, int> freq;
        for(int num : nums) {
            freq[num]++;
        }
    
        int grp = nums.size() / k;
        
        for(auto p : freq) {
            if(p.second > grp) {
                return false;
            }
        }
        
        return true;
    }
};
