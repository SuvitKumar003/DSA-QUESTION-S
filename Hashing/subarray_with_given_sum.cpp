#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool subarray_with_given_sum(vector<int> arr,int sum)
{
 unordered_set<int> s;
 int curr_sum=0;
 for(int i=0;i<arr.size();i++)
 {
  curr_sum+=arr[i];
  if(curr_sum==sum)
  {
    return true;
  }
  if(s.find(curr_sum-sum)!=s.end())
  {
    return true;
  }
  else
  {
    s.insert(curr_sum);
  }
 }
 return false;
}
int main()
{
  vector<int> arr={1,2,3,4,5,6,7,8,9,10};
  if(subarray_with_given_sum(arr,11))
  {
    cout<<"Found the sub array "<<endl;
  }
  else
  {
    cout<<"Noy found "<<endl;
  }
}