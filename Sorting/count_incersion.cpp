#include<iostream>
using namespace std;
int countAndMerge(int arr[],int l,int m,int h)
{
  int n1=m-l+1;
  int n2=h-m;
 int* left=new int[n1];
  int* right=new int[n2];
  
  for(int i=0;i<n1;i++)
  {
    left[i]=arr[l+i];
  }
  for(int i=0;i<n2;i++)
  {
    right[i]=arr[m+1+i];
  }
  int i=0,j=0,k=l;
  int count=0;
  while(i<n1 && j<n2)
  {
    if(left[i]<right[j])
    {
    arr[k++]=left[i++];
    }
    else
    {
      arr[k++]=right[j++];
      count+=n1-i;
    }
  }
  return count;

}
int count_inversion(int arr[],int l,int r)
{
  int count=0;
 if(l<r)
 {
  int m=(l+r)/2;
  count+=count_inversion(arr,l,m);
  count+=count_inversion(arr,m+1,r);
  count+=countAndMerge(arr,l,m,r);


 }
 return count;
}
int main()
{
  int arr[]={40,30,20,10};
  int s1=sizeof(arr)/sizeof(arr[0]);
  cout<<count_inversion(arr,0,s1-1);
  return 0;
}