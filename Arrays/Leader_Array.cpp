#include<iostream>
using  namespace std;
void leader(int arr[],int n)
{
  
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=i;j<n;j++)
    {
      
      if(arr[i]<arr[j])
      {
        count++;
      }
    }
    if(count==0)
    {
      cout<<arr[i]<<" ";
    }
  }
}
int main()
{
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
  cout<<"Enter the elements of the array: ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  leader(arr,n);
  return 0;
}