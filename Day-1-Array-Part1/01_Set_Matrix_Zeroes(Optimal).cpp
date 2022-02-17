#include <bits/stdc++.h>
using namespace std;

// optimized solution O(m*n)  and O(1) space
class Solution

{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int colZero = true;
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] == 0)
            {
                colZero = false;
            }

            for (int j = 1; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if (colZero == false)
            {
                matrix[i][0] = 0;
            }
        }
    }
};