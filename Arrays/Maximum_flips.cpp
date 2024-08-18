#include<iostream>
using namespace std;
void print(bool arr[],int n)
{
  if(arr[i]!=arr[i-1])
{
  if(arr[i]!=arr[0])
  {
    cout<<"From "<<i<<" to ";
  }
  else
  {
    cout<<i-1<<endl;
  }
}
if(arr[n-1]!=arr[0])
{
  cout<<n-1<<endl;
}
}
int main()
{
  int arr[]={0,0,1,1,0,0,1,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  bool flip[n];
  for(int i=0;i<n;i++)
  {
    flip[i]=arr[i];
  }
  for(int i=1;i<n;i++)
  {
    if(flip[i]!=flip[i-1])
    {
      flip[i]=!flip[i];
      flip[i-1]=!flip[i-1];
    }
  }
  print(flip,n);
  return 0;
}