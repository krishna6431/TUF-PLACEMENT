// SDE SHEET SOLUTIONS
//  DAY-1
//  Array-Part-1

#include <bits/stdc++.h>
using namespace std;

// bruteforce solution for [ O(N*M(N+M))] inplace
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // bruteForce
        int row = matrix.size();
        int col = matrix[0].size();
        // cout << row << " " << col << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < row; k++)
                    {
                        if (matrix[k][j] == 0)
                        {
                            continue;
                        }
                        else
                        {
                            matrix[k][j] = 1357911;
                        }
                    }

                    for (int k = 0; k < col; k++)
                    {
                        if (matrix[i][k] == 0)
                        {
                            continue;
                        }
                        else
                        {
                            matrix[i][k] = 1357911;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 1357911)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};