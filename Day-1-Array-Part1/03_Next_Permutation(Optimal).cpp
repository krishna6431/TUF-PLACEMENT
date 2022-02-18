#include <bits/stdc++.h>
using namespace std;

// brutefoce can be finding all possible permutations and then return just next permutation

// this is a optimal way to find next permutation in o(N) tc;
// this is bascially the peak finding method from last and lexicographic technique

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int sz = nums.size();
        int lastIdx = -1;
        for (int i = sz - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                lastIdx = i;
                break;
            }
        }

        if (lastIdx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        else
        {
            int nextGreater = lastIdx;
            for (int i = lastIdx + 1; i < sz; i++)
            {
                if (nums[i] > nums[lastIdx - 1] && nums[i] < nums[nextGreater])
                {
                    nextGreater = i;
                }
            }
            swap(nums[lastIdx - 1], nums[nextGreater]);
            sort(nums.begin() + lastIdx, nums.end());
        }
    }
};