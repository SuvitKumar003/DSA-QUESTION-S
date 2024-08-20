#include<iostream>
using namespace std;
void index2(int arr[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
sum=sum+arr[i];
  }
  if(sum%3!=0)
  {
return ;
  }
  int sum1=0;
  int sum2=0;
  sum1=sum/3;
  int ind1=-1;
  int ind2=-1;
  sum2=2*sum1;
  int x;
  for(int i=0;i<n;i++)
  {
    x+=arr[i];
    if(sum1==x&& ind1==-1)
    {
       ind1=i;
    }
    else if(sum2==x && ind2==-1)
    {
      ind2=i;
    }
  }
  if(ind1!=-1 && ind2!=-1)
  {
    cout<<ind1<<" "<<ind2<<endl;
  }
  else
  {
    cout<<"No such subarray exists."<<endl;
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
  index2(arr,n);
  return 0;
}