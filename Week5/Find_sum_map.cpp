#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];

            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i};
            }

            numMap[nums[i]] = i;
        }

        // Return an empty vector if no solution found
        return {};
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2)
    {
        cout << "Indices of numbers that sum up to the target: [" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No two numbers found that sum up to the target." << endl;
    }

    return 0;
}
