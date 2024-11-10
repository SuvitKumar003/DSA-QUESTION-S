#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>
bool pair_sum(vector<int> arr,int sum)
{
  unordered_set<int> s;
  for(int i=0;i<arr.size();i++)
  {
    if(s.find(sum-arr[i])!=s.end())
    {
      return true;
    }
    else
    {
      s.insert(arr[i]);
    }
  }
}
int main()
{
  vector<int> arr={1,2,3,4,5,6,7,8,9};
  int sum=10;
  cout<<pair_sum(arr,sum);
  return 0;
}