#include<iostream>
using namespace std;
void  union_sorted_array(int arr1[],int arr2[],int s1,int s2)
{
  int i=0,j=0,k=0;
  int* arr3=new int[s1+s2];
  while(i<s1 && j<s2)
  {
    if(i>0 && arr1[i]==arr1[i-1])
    {
      i++;
      continue;
    }
    if(arr1[i]<arr2[j])
    {
      cout<<arr1[i]<<" ";
      i++;
    }
    else if(arr1[i]>arr2[j])
    {
      cout<<arr2[j]<<" ";
      j++;
    }
    else
    {
      cout<<arr1[i]<<" ";
      i++;
      j++;
    }
  }
  while(i<s1)
  {
    cout<<arr1[i]<<" ";
    i++;
  }
  while(j<s2)
  {
    cout<<arr2[j]<<" ";
    j++;
  }
}
int main()
{
  int arr1[]={1,2,3,4,5};
  int arr2[]={2,3,4,5,6};
  int s1=sizeof(arr1)/sizeof(arr1[0]);
  int s2=sizeof(arr2)/sizeof(arr2[0]);
  union_sorted_array(arr1,arr2,s1,s2);
  return 0;
}