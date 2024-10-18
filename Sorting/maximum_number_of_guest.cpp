#include<iostream>
#include<algorithm>
using namespace std;
int maximum_guest(int arr[],int dep[],int size)
{
  sort(arr,arr+size);
  sort(arr,arr+size);
  int i=1,j=0,count=1,res=1;
  for(;i<size;i++)
  {
    if(arr[i]<=dep[j])
    {
      i++;
      count++;
    }
    else
    {
      j++;
      count--;
    }
    res=max(res,count);
  }
  return res;
}
int main()
{
  int arr[]={900, 600, 700};
  int dep[]={1000, 800, 730};
  int s1=sizeof(arr)/sizeof(arr[0]);
  cout<<maximum_guest(arr,dep,s1);
  return 0;
}