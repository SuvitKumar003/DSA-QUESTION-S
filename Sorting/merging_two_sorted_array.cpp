#include<iostream>
using namespace std;

int* merge_array(int arr1[],int arr2[],int s1,int s2)
{
  int i=0,j=0;
  int k=0;
  int tot=s1+s2;
  int* arr3 = new int[tot];
  while(i<s1 && j<s2)
  {
    if(arr1[i]<=arr2[j])
    {
      arr3[k++]=arr1[i++];
    }
    else
    {
      arr3[k++]=arr2[j++];
    }
  }
 while(i<s1)
 {
  arr3[k++]=arr1[i++];
 }
 while(j<s2)
 {
  arr3[k++]=arr1[j++];
 }
 return arr3;
}
int main()
{
  int arr1[]={1,3,5,7,9};
  int arr2[]={2,4,6,8,10};
  int s1=sizeof(arr1)/sizeof(arr1[0]);
  int s2=sizeof(arr2)/sizeof(arr2[0]);
  int *arr3=merge_array(arr1,arr2,s1,s2);
  for(int i=0;i<s1+s2;i++)
  {
    cout<<arr3[i]<<" ";
  }
  return 0;
}
    
