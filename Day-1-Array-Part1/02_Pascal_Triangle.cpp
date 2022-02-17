#include <bits/stdc++.h>
using namespace std;

// 3types of questions are possible on it

/// computing ncr in o(N)

//[i][j]th element = C(I-1,J-1) FASTER TECHNIQUE

// ith row :
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        ans.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            vector<int> temp(1 + ans[i - 1].size());
            temp[0] = 1;
            temp[temp.size() - 1] = 1;
            int k1 = 0, k2 = 1;
            for (int j = 1; j < temp.size() - 1; j++)
            {
                temp[j] = ans[i - 1][k1++] + ans[i - 1][k2++];
            }
            ans.push_back(temp);
        }

        return ans;
    }
};