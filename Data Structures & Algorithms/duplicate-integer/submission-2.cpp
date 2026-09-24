class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> record;
        
        for (int i = 0; i < nums.size(); i++) {
            if (record[nums[i]] == 0) {
                record[nums[i]] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};