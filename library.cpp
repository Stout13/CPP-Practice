#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vectorSolution;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[i]+nums[j] == target) {
                    vectorSolution.push_back(i);
                    vectorSolution.push_back(j);
                }
            }
        }
        std::cout<<"Hooray!";
        return vectorSolution;
    }
};

using namespace std;

int main() {
    std::vector<int> nums { 1,2,3 };
    int target = 4;
    Solution A;
    A.twoSum(nums, target);
}