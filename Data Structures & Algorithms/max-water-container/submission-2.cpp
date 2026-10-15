class Solution {
public:
    int maxArea(vector<int>& heights) {
        int pA = 0;
        int pB = heights.size() - 1;
        int bA = pA;
        int bB = pB;
        while (pA < pB) {
            int sum = (pB - pA) * std::min(heights[pA], heights[pB]);

            if (sum > (bB - bA) * std::min(heights[bA], heights[bB])) {
                bA = pA;
                bB = pB;
            }

            if (heights[pA] <= heights[pB]) {
                pA++;
            } else {
                pB--;
            }
        }
        return (bB - bA) * std::min(heights[bA], heights[bB]);  
    }
};



