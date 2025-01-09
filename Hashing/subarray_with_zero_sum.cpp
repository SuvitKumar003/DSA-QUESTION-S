#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool subarray_zero_sum(vector<int> arr)
{
  
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