#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    while (index < nums.size()) {
        nums[index] = 0;
        index++;
    }
}

int main() {

    // Test Case 1
    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);

    cout << "Test Case 1: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    // Test Case 2 - edge case
    vector<int> nums2 = {0};
    moveZeroes(nums2);

    cout << "Test Case 2: ";
    for (int x : nums2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}