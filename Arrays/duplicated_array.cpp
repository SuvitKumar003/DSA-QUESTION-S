#include<iostream>
using namespace std;
void duplicate(int arr[],int n)
{
  int temp[n];
  temp[0]=arr[0];
  int res=1;
  for(int i=0;i<n;i++)
  {
    if(temp[res-1]!=arr[i])
    {
      temp[res]=arr[i];
      res++;
    }
  }
  cout<<"The array after removing the duplicates is: "<<endl;
  for(int i=0;i<res;i++)
  {
    arr[i]=temp[i];
    
  }
  return;
  
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  duplicate(arr,n);
 
 
  return 0;
}