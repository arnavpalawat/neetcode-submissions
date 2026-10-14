class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> toReturn;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int target = 0 - nums[i];
            int pointerA = i + 1;
            int pointerB = nums.size() - 1;
            while (pointerA < pointerB) {
                int sum = nums[pointerA] + nums[pointerB];
                if (sum > target) {
                    pointerB--;
                } else if (sum < target) {
                    pointerA++;
                } else {
                    // std::cout << toReturn{nums[pointerA], nums[pointerB]} << " ";
                    if (std::find(toReturn.begin(), toReturn.end(), std::vector<int>{nums[i], nums[pointerA], nums[pointerB]}) == toReturn.end()) {
                        toReturn.push_back({nums[i], nums[pointerA], nums[pointerB]});
                    }
                    pointerA++;
                    pointerB--;
                }
            }
        }
        return toReturn;
    }
};