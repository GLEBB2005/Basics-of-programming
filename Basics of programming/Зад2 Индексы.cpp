#include <iostream>
#include <vector>
#include <cmath>

bool func(const std::vector<int>& nums, int indexDiff, int valueDiff) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (abs(i - j) <= indexDiff && abs(nums[i] - nums[j]) <= valueDiff) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 7, 9};
    int indexDiff = 3;
    int valueDiff = 2;
    bool result = func(nums, indexDiff, valueDiff);
    if (result) {
        std::cout << "There exists a pair of indices that satisfy the conditions." << std::endl;
    } else {
        std::cout << "There does not exist a pair of indices that satisfy the conditions." << std::endl;
    }

    return 0;
}
