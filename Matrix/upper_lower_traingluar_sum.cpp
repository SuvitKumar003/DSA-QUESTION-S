#include<iostream>
#include<vector>
using namespace std;
vector<int> sum_of_mat(vector<vector<int>> &mat)
{
    int mat_row = mat.size();
    int mat_col = mat[0].size();
    vector<int> sum;
    int upper_sum = 0;
    int lower_sum = 0;
    for (int i = 0; i < mat_row; i++)
    {
        for (int j = 0; j < mat_col; j++)
        {
            if (i < j)
            {
                upper_sum += mat[i][j];
            }
            if (i > j)
            {
                lower_sum += mat[i][j];
            }
        }
    }
    sum.push_back(upper_sum);
    sum.push_back(lower_sum);
    return sum;
}