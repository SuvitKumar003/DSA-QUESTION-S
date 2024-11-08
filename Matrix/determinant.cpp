#include<iostream>
#include<vector>
using namespace std;
int determinant_matrix(vector<vector<int>> mat)
{
  int mat_row=mat.size();
  int mat_col=mat[0].size();
  int i=0;
  int s1,s2,s3;
  for(int j=0;j<mat_col;j++)
  {
    if(j==0)
    {
      int k=i+1;
      int l=k+1;
      int temp=mat[k][k]*mat[l][l]-mat[k][l]*mat[l][k];
      cout<<" The result of cofactor for first row and column is "<<temp<<endl;
      s1=mat[i][j]*temp;
      
    }
    else if(j==1)
    {
      int k=j+1;
      int temp=mat[j][i]*mat[k][k]-mat[j][k]*mat[k][i];
      cout<<" The result of cofactor matrix for second column is "<<temp<<endl;
      s2=-mat[i][j]*temp;
    }
    else if(j==2)
    {
      int k=i+1;
      int temp=mat[k][i]*mat[j][k]-mat[k][k]*mat[j][i];
      cout<<" The result of the cofactor for the third columns is "<<temp<<endl;
      s3=mat[i][j]*temp;
      return s1+s2+s3;
    }
    else
    {
      cout<<" out of bound"<<endl;
    }

  }
}
int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<" The result of the determinant is "<<determinant_matrix(mat);
    return 0;
}
