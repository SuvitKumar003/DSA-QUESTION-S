#include<iostream>
using namespace std;
 int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+ arr[i];
    sum_array[i]=sum;
  }
int getsum(int arr[],int n,int start,int end)
{
  int sum_array[n]={0};
 
  if(start==0)
  {
    return sum_array[end];
  }
  else
  {
  return sum_array[end]-sum_array[start-1];
  }
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int start,end;
  cout<<"Enter the starting index of the subarray: ";
  cin>>start;
  cout<<"Enter the ending index of the subarray: ";
  cin>>end;
  cout<<"The sum of the subarray is: "<<getsum(arr,n,start,end)<<endl;
  return 0;
}