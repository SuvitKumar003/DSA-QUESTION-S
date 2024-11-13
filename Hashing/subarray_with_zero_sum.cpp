#include<iostream>
#include<vector>
using namespace std;
bool subarray_zero_sum(vector<int> arr)
{
  
  for(int i=0;i<arr.size();i++)
  {
    int arr_sum=arr[i];
    for(int j=i+i;j<arr.size();j++)
    {
      arr_sum+=arr[j];
      if(arr_sum==0)
      {
        return true;
      }

    }
  }
  return false;
}
int main()
{
  vector<int> arr={4,-3,2,1};
  if(subarray_zero_sum(arr))
  {
    cout<<" Found "<<endl;
  }
  else
  {
    cout<<" not found "<<endl;
  }
}