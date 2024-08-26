#include<iostream>
using namespace std;
int max_appear(int arr[],int n,int left[],int right[])
{
  int freqw[100]={0};
  for(int i=0;i<n;i++)
  {
   freqw[left[i]]++;
   freqw[right[i]+1]--;
  }
  int res=0;
  for(int i=1;i<100;i++)
  {
    freqw[i]=freqw[i]+freqw[i-1];
    if(freqw[i]>res)
    {
      res=i;
    }
  }
  return res;
}
int main()
{
  int n;
  cin>>n;
  int arr[n],left[n],right[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    cin>>left[i];
    cin>>right[i];
  }
  cout<<max_appear(arr,n,left,right);
  return 0;
}
