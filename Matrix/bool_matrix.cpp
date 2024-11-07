#include<iostream>
#include<vector>
using namespace std;
void bool_matrix(vector<vector<int>> mat)
{
int n=mat.size();
int m=mat[0].size();
vector<vector<int>> res(n,vector<int>(m,0));
for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    if(mat[i][j]==1)
    {
    res[i][j]=1;
    }
  }
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    if(res[i][j]==1)
    {
      for(int k=0;k<m;k++)
      {
        mat[i][k]=1;
      }
      for(int k=0;k<n;k++)
      {
        mat[k][j]=1;
      }
    }
  }
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    cout<<mat[i][j]<<" ";
  }
  cout<<endl;
}
}
int main()
{
    vector<vector<int>> mat = {{1, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    bool_matrix(mat);
    return 0;
}