#include<iostream>
using namespace std;

int* merge_array(int arr1[],int arr2[],int s1,int s2)
{
  int i=0,j=0;
  int k=0;
  int tot=s1+s2;
  int arr3[tot];
  for(int i=0;i<s1;i++)
  {
if(arr1[i]<arr2[j])
{
  arr3[k++]=arr1[i++];

}
else
{
  arr3[k++]=arr2[j++];
}
   }
    }

