#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void snake_pattern(vector<vector<int>> arr1)
{
  int r=arr1.size();
  int c=arr1[0].size();
  for(int i=0;i<r;i++)
  {
    if(i%2==0)
    {
      for(int j=0;j<c;j++)
      {
        cout<<arr1[i][j]<<" ";
      }
    }
    else
    {
      for(int j=c-1;j>=0;j--)
      {
        cout<<arr1[i][j]<<" ";
      }
    }
  }
}
int main()
{
  vector<vector<int>> arr1={{1,2,3},{4,5,6},{7,8,9}};
  snake_pattern(arr1);
  return 0;
}