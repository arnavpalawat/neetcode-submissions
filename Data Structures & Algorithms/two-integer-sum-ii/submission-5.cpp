class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int pointA = 0;
        int pointB = numbers.size() - 1;
        int sum = 0;
        while (pointA < pointB) {
            sum = numbers[pointA] + numbers[pointB];
            if (sum > target) {
                pointB--;
            } else if (target > sum) {
                pointA++;
            } else if (target == sum) {

                return {pointA + 1, pointB + 1};
            }
        }
        return {0, 0};
    }
};
