#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Output: [" << result[0] << ", "
         << result[1] << "]" << endl;

    // Test Case 1:
    // Input: [2,7,11,15], target = 9
    // Expected Output: [0,1]

    // Test Case 2:
    // Input: [3,2,4], target = 6
    // Expected Output: [1,2]

    return 0;
}