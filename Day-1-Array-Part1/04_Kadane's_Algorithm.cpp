#include <bits/stdc++.h>
using namespace std;

// we can use brute force method by using 3 for loops , finding each subarray and compution sum and then find max

// optimal way to find maximum subarrray sum O(N)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // maximum sum subarray kadane algorithm
        // it works for negative elements also
        if (nums.size() == 1)
        {
            return nums[0];
        }
        int ans = INT_MIN;
        int currSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums[i];
            ans = max(ans, currSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return ans;
    }
};