#include<iostream>
#include<vector>
using namespace std;

void reverseCol(vector<vector<int>> &mat)
{
    int mat_row = mat.size();
    int mat_col = mat[0].size();
    
    // Iterate over the columns and swap columns
    for (int i = 0; i < mat_col / 2; i++)
    {
        for (int j = 0; j < mat_row; j++)
        {
            // Swap elements at column i and column (mat_col - i - 1)
            swap(mat[j][i], mat[j][mat_col - i - 1]);
        }
    }
    
    // Output the matrix after column reversal
    for (int i = 0; i < mat_row; i++)
    {
        for (int j = 0; j < mat_col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    reverseCol(mat);
    return 0;
}
