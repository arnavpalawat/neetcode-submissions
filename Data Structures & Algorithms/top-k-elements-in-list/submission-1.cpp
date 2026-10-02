class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> toReturn;
        map <int, int> tracker;
        
        for (int num : nums) {
            tracker[num] = tracker[num] + 1;
        }
        for (int i = 0; i < k; i++) {
            int largest = 0;
            int largestCount = 0;
            for (auto iter : tracker) {
                if (iter.second > largestCount) {
                    largest = iter.first;
                    largestCount = iter.second;
                }
                
            }
            toReturn.push_back(largest);
            tracker.erase(largest);
        }

        return toReturn;
    }
};

/*

map<int, int> (index, freq)

iterate k times
iterate through the map and get largest then erase

return gotten vals
*/