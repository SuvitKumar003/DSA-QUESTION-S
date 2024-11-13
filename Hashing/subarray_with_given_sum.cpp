#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
/*bool subarray_with_given_sum(vector<int> arr,int k)
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
    if(prefix_sum[i]==k)
    {
      return true;
    }
    else
    {
      for(int j=i;j<arr.size();j++)
      {
        if(prefix_sum[j]-prefix_sum[i-1]==k)
        {
          return true;
        }
      }
    }
  }
  return false;
}*/
bool issum(vector<int> arr ,int k)
{
  int pre_sum=0;
  unordered_set<int> s;
  for(int i=0;i<arr.size();i++)
  {
    pre_sum+=arr[i];
    if(pre_sum==k)
    {
      return true;
    }
    if(s.find(pre_sum-k)!=s.end())
    {
      return true;
    }
    s.insert(pre_sum);
  }
  return false;
}
int main()
{
  vector<int> arr={1,4,20,3,10,5};
  int k=33;
  if(issum(arr,k))
  {
    cout<<" Found "<<endl;
  }
  else
  {
    cout<<" not found "<<endl;
  }
}