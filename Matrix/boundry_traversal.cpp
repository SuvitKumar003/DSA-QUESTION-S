#include<iostream>
using namespace std;
int R=3;
int C=3;
void boundry_traversal(int arr1[3][3])
{
  if(R==1)
  {
    for(int i=0;i<C;i++)
    {
      cout<<arr1[0][i]<<" ";
    }
  }
  else if(C==1)
  {
    for(int i=0;i<R;i++)
    {
      cout<<arr1[i][0]<<" ";
    }
  }
  else
  {
    for(int i=0;i<C;i++)
    {
      cout<<arr1[0][i]<<"  ";
    }
    for(int i=1;i<R;i++)
    {
      cout<<arr1[i][C-1]<<" ";
    }
    for(int i=C-2;i>=0;i--)
    {
      cout<<arr1[R-1][i]<<" ";
    }
    for(int i=R-2;i>0;i--)
    {
      cout<<arr1[i][0]<<" ";
    } 
  }
}
int main()
{
  int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  boundry_traversal(arr1);
  return 0;
}
