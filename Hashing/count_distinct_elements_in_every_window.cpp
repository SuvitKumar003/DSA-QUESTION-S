#include<iostream>
using namespace std;
#include<unordered_map>

void count_distinct_elements_in_Every_window(int arr[],int n,int k)
{
 unordered_map<int,int> m;
 for(int i=0;i<k;i++)
 {
  m[arr[i]]++;
 }
 for(int i=k;i<n;i++)
 {
  cout<<m.size()<<" ";
  m[arr[i-k]]--;
  if(m[arr[i-k]]==0)
  {
    m.erase(arr[i-k]);

  }

  m[arr[i]]++;
 }
  cout<<m.size();
}
int main()
{
  int arr[]={10,20,20,10,30,40,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  count_distinct_elements_in_Every_window(arr,n,k);
  return 0;
}