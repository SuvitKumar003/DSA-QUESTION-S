#include<iostream>
using namespace std;
int length_of_subarray(int arr[],int n)
{
  int count=1;
  for(int i=0;i<n;i++)
  {
    int res=1;
    for(int j=i+1;j<n;j++)
    {
    if(arr[i]%2==0&&arr[i+1]%2!=0 || arr[i]%2!=0&&arr[i+1]%2==0)
    {
     res++;
    }
    else
    {
     break;
   }
    res=max(res,count); 
    }
  }
  return count;
}
int main()
{
  int arr[]={1,2,3,4,5};
  cout<<"The length of longest even odd subarray is: "<<length_of_subarray(arr,5);
  return 0;
}