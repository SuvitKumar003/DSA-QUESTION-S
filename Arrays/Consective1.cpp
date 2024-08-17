#include<iostream>
using namespace std;
int maxconsective(int arr[],int n)
{
  int count1=0,count2=0;
  for(int i=0;i<n;i++)
  {
   
   if(arr[i]==0)
   {
count2=0;
   }
   else
   {
    count2++;
    count1=max(count1,count2);
   }
  }
  return count1;
}
int main()
{
  int arr[]={1,1,1,1};
  cout<<"The maximum consective 1's are: "<<maxconsective(arr,4);
  return 0;
}