#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int position_of_median(int arr[3][3])
{
  int min1=INT_MAX;
  int max2=INT_MIN;
  for(int i=0;i<3;i++)
  {
    min1=min(min1,arr[i][0]);
    max2=max(max2,arr[i][2]);
  }
  int desired=(3*3+1)/2;
  while(min1<max2)
  {
    int mid=(min1+max2)/2;
    int midpos=0;
    for(int i=0;i<3;i++)
    {
      midpos+=upper_bound(arr[i],arr[i]+3,mid)-arr[i];

    }
    if(midpos<desired)
    {
      min1=mid+1;
    }
    else
    {
      max2=mid;
    }

  }
  return min1;
}
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<position_of_median(arr);
  return 0;
}