#include<iostream>
using namespace std;
void duplicate(int arr[],int n)
{
  int j=1;
  for(int i=1;i<n;i++)
  {
    if(arr[i]!=arr[j-1])
    {
      arr[j]=arr[i];
      j++;
    }
  }
  cout<<"The array after removing the duplicates is: "<<endl;
  for(int i=0;i<j;i++)
  {
    cout<<arr[i]<<endl;
  }
}
int main()
{
  cout<<" Enter the size of the array "<<endl;
  int n;
  cin>>n;
  cout<<"Enter the elements of the array"<<endl;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  duplicate(arr,n);
}