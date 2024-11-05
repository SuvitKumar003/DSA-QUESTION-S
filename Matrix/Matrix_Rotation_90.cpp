#include<iostream>
using namespace std;
void rotate90(int arr[3][3])
{
  int n=3;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      swap(arr[i][j],arr[j][i]);
    }
  }
  int low=0;
  int high=n-1;
  while(low<high)
  {
    for(int i=0;i<n;i++)
    {
      swap(arr[low][i],arr[high][i]);
    }
    low++;
    high--;
  }
}
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  rotate90(arr);
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}