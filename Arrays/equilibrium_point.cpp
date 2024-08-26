#include<iostream>
using namespace std;
int equilibrium_point(int arr[],int n)
{
  int sum=0;
  int sum_array[n]={0};
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
    sum_array[i]=sum;
  }
  for(int i=0;i<n;i++)
  {
    if(sum_array[i-1]==(sum_array[n-1]-sum_array[i]))
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int eq_point=equilibrium_point(arr,n);
  if(eq_point==-1)
  {
    cout<<"No equilibrium point exists."<<endl;
  }
  else
  {
    cout<<"The equilibrium point is at index "<<eq_point<<endl;
  }
  return 0;
}
// 8 8 3 7 8 2 7 2