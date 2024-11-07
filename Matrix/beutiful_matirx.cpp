#include<iostream>
#include<vector>
using namespace std;
int beutiful_matrix(vector<vector<int>> mat)
{
  int mat_row=mat.size();
  int mat_col=mat[0].size();
  int count=0;
  vector<int> sum_row(mat_row,0);
  vector<int> sum_col(mat_col,0);
  for(int i=0;i<mat_row;i++)
  {
    for(int j=0;j<mat_col;j++)
    {
      sum_row[i]+=mat[i][j];
      sum_col[j]+=mat[i][j];
    }
  }
  int maxsum=0;
  for(int i=0;i<mat_row;i++)
  {
    maxsum=max(maxsum,sum_row[i]);
    maxsum=max(maxsum,sum_col[i]);
  }
for(int i=0,j=0;i<mat_row && j<mat_col;)
{
  int diff=min(maxsum-sum_row[i],maxsum-sum_col[j]);
  mat[i][j]+=diff;
  sum_row[i]+=diff;
  sum_col[j]+=diff;
  count+=diff;
  if(sum_row[i]==maxsum)
  {
    i++;
  }
  if(maxsum==sum_col[j])
  {
    j++;
  }
}
return count;
}
int main()
{
    vector<vector<int>> mat = {{1,2},{3,4}};
    cout<<beutiful_matrix(mat);
    return 0;

}