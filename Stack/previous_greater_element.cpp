#include<iostream>
using namespace std;
#include<stack>
int main()
{
  int arr[]={4,5,2,10,8};
  int ans[5];
   ans[0]=-1;
  stack<int> st;
  for(int i=1;i<5;i++)
  {
    while(st.empty()==false && st.top()<=arr[i])
    {
      st.pop();
    }

    if(st.empty())
    {
      ans[i]=-1;
      st.push(arr[i]);
    }
    else{
      ans[i]=st.top();
    }
    st.push(arr[i]);
  }
  for(int i=0;i<5;i++)
  {
    cout<<ans[i]<<" ";
  }

}
