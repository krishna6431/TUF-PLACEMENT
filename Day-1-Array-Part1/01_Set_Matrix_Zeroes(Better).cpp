#include <bits/stdc++.h>
using namespace std;

// better solution tc = O(N*M)
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> r(matrix.size(), 0);
        vector<int> c(matrix[0].size(), 0);

        int row = matrix.size();
        int col = matrix[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    r[i] = -1;
                    c[j] = -1;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (r[i] == -1 || c[j] == -1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};