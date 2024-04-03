#include <bits/stdc++.h>

class Solution {
public:
  std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); ++i) {
      int complement = target - nums[i];
      if (seen.count(complement)) {
        return {seen[complement], i};
      }
      seen[nums[i]] = i;
    }
    return {};
  }
};

int main() {
  // Input (replace with your desired numbers)
  std::vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  Solution solution;
  std::vector<int> result = solution.twoSum(nums, target);

  if (result.empty()) {
    std::cout << "No two sum solution found." << std::endl;
  } else {
    std::cout << "The two numbers that add up to " << target << " are: "
              << nums[result[0]] << " and " << nums[result[1]] << std::endl;
  }

  return 0;
}
