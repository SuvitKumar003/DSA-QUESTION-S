#include<iostream>
using namespace std;
int length_of_subarray(int arrf,int n)
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
    count=max(res,count); 
    }
  }
  return count;
}
int main()
{
  int arr[]={10,12,14,7,8};
  cout<<"The length of longest even odd subarray is: "<<length_of_subarray(arr,5);
  return 0;
}
