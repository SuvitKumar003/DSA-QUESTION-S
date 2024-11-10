#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<int,int> freq_element(vector<int> arr)
{
  unordered_map<int,int> m;

  for(int i=0;i<arr.size();i++)
  {
   m[arr[i]]++;
  }
  return m;


} 
int main()
{
  vector<int> arr={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
  unordered_map<int,int> m=freq_element(arr);
  for(auto i=m.begin();i!=m.end();i++)
  {
    cout<<i->first<<" "<<i->second<<endl;
  }
  return 0;

}