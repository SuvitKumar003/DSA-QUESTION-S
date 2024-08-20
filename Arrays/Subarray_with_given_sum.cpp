#include<iostream>
using namespace std;
void subarray_sum(int arr[],int n,int req_sum)
{
  int sum1=0;
  for(int i=0;i<n;i++)
  {
    sum1=0;
    for(int j=i;j<n;j++)
    {
      sum1+=arr[i];
      if(sum1==req_sum)
      {
        cout<<"The subarray with the given sum is from "<<i<<" to "<<j<<endl;
        break; 
      }
    }
  }

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
  int req_sum;
  cout<<"Enter the required sum: ";
  cin>>req_sum;
  subarray_sum(arr,n,req_sum);
  return 0;
}