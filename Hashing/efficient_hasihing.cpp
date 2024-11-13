#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>
/*bool subarray_with_zero_sum(vector<int> arr)
{
  vector<int> prefix_sum;
  for(int i=0;i<arr.size();i++)
  {
    if(i==0)
    {
      prefix_sum.push_back(arr[i]);
    }
    else
    {
      prefix_sum.push_back(prefix_sum[i-1]+arr[i]);
    }
  }
  for(int i=0;i<arr.size();i++)
  {
    if(prefix_sum[i]==0)
    {
      return true;
    }
    else
    {
      for(int j=i+1;j<arr.size();j++)
      {
        if(prefix_sum[j]-prefix_sum[i]==(-arr[i]))
        {
          return true;
        }
      }
    }
  }
}*/

bool subarray_with_zero_sum(vector<int> arr)
{
  unordered_set<int> s;
  int prefix_sum=0;
  for(int i=0;i<arr.size();i++)
  {
    prefix_sum+=arr[i];
    if(s.find(prefix_sum)!=s.end())
    {
      return true;
    }
    if(prefix_sum==0)
    {
      return true;
    }
    s.insert(prefix_sum);
  }
  return false;
}
int main()
{
  vector<int> arr={-3,4,-3,-1,1};
  if(subarray_with_zero_sum(arr))
  {
    cout<<" Found "<<endl;
  }
  else
  {
    cout<<" not found "<<endl;
  }
}