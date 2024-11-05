#include<iostream>
using namespace std;
void spiral_traversal(int arr[3][3])
{
  int left=0;
  int top=0;
  int right=2;
  int bottom=2;
  while(left<=right && top<=bottom)
  {
    for(int i=left;i<=right;i++)
    {
      cout<<arr[top][i]<<" ";
    }
   top++;
   for(int i=top;i<=bottom;i++)
   {
    cout<<arr[i][right]<<" ";
   } 
   right--;
   if(top<=bottom)
   {
   for(int i=right;i>=left;i--)
   {
    cout<<arr[bottom][i]<<" ";

   }
   }
   bottom--;
    if(left<=right)
    {
   for(int i=bottom;i>=top;i--)
   {
    cout<<arr[i][left]<<" ";
   }
    left++;
  }
  }
}
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  spiral_traversal(arr);
  return 0;
}