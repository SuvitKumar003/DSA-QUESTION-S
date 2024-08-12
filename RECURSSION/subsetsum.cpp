#include<iostream>
using namespace std;
int countsubsetsunm(int arr[],int n,int sum)
{
 if(n==0)
 {
  return sum==0?1:0;
 }
  return countsubsetsunm(arr,n-1,sum)+countsubsetsunm(arr,n-1,sum-arr[n-1]);
}

int main()
{
  int arr[]={10,20,15};
  cout<<countsubsetsunm(arr,3,25);
  return 0;

}
